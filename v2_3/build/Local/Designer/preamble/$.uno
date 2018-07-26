using Uno;
using Uno.Collections;
using Uno.UX;
using Uno.IO;
using Outracks.Simulator;
using Outracks.Simulator.Bytecode;
using Outracks.Simulator.Runtime;
using Outracks.Simulator.Client;
namespace Outracks.Simulator 
{ 
	public class GeneratedApplication : Outracks.Simulator.Client.Application
	{
		public GeneratedApplication()
			: base(
				new [] 
				{new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("127.0.0.1"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("172.21.26.209"), 12124)},"G:\\PROJECT\\UiOnly\\v2_3\\v2.unoproj",new string[] 
				{ })
		{
			Runtime.Bundle.Initialize("v2");

			if defined(DotNet)
				Reflection = new DotNetReflectionWrapper(DotNetReflection.Load("G:/PROJECT/UiOnly/v2_3/build/Local/Designer"));
			if defined(CPLUSPLUS)
				Reflection = new NativeReflection(new SimpleTypeMap());
		}
	}
}