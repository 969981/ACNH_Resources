
void FUN_04002e30(long param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  puVar2 = DAT_05b05a08;
  if (DAT_05b05a08 != (undefined4 *)0x0) {
    nn::os::GetTlsValue(*DAT_05b05a08);
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x10))(*(long **)PTR_DAT_04bdf328,0x18,0);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      nn::os::SetTlsValue(*puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x248);
  if ((code *)*puVar4 == (code *)0x0) {
    plVar1 = (long *)puVar4[2];
    if (plVar1 == (long *)0x0 && (code *)puVar4[3] == (code *)0x0) {
      uVar3 = 0;
    }
    else if (plVar1 == (long *)0x0) {
      uVar3 = (*(code *)puVar4[3])();
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x18))();
    }
  }
  else {
    uVar3 = (*(code *)*puVar4)(puVar4[1]);
  }
  *(undefined4 *)(param_1 + 0x238) = uVar3;
  if (DAT_05b05a08 != (undefined4 *)0x0) {
    FUN_04002fa0();
  }
  nn::os::SignalEvent((EventType *)(param_1 + 0x208));
  return;
}

