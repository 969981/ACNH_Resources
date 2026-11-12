
void FUN_00939fec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  local_28 = &DAT_04061bb1;
  plVar3 = (long *)FUN_038c6d48(0x800000,&local_30,param_2,8,1,0);
  *(long **)(param_1 + 0x90) = plVar3;
  lVar2 = DAT_05ae7600;
  local_28 = (undefined *)CONCAT71(local_28._1_7_,1);
  local_30 = (undefined *)0x10000000120;
  if (DAT_05ae7600 == 0) {
    plVar3 = malloc(0x128);
  }
  else {
    if (plVar3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar2 + 8);
      if (lVar4 != 0) {
        plVar3 = (long *)(lVar4 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x128,8);
  }
  *(undefined8 *)((long)plVar3 + 0x1d) = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  puVar1 = PTR_DAT_04bb5cd0;
  plVar3[5] = 0x4020000040a00000;
  *(undefined4 *)(plVar3 + 6) = 0x4162cccd;
  plVar3[10] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  *(undefined4 *)(plVar3 + 0xb) = 0;
  plVar3[0xc] = 0;
  *(undefined4 *)(plVar3 + 0xd) = 0;
  *(undefined8 *)((long)plVar3 + 0x34) = 0;
  *(undefined8 *)((long)plVar3 + 0x3c) = 0;
  *(undefined8 *)((long)plVar3 + 0x44) = 0;
  plVar3[0xe] = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  plVar5 = plVar3 + 0x15;
  *plVar5 = 0;
  plVar6 = plVar3 + 0x12;
  *plVar6 = 0;
  plVar3[0xf] = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  plVar3[0x16] = 0;
  plVar3[0x17] = 0;
  puVar1 = PTR_DAT_04bb5cd8 + 0x10;
  *(undefined1 *)(plVar3 + 0x24) = 0;
  plVar3[0x10] = (long)plVar3;
  plVar3[0x18] = (long)puVar1;
  plVar3[0x19] = (long)(plVar3 + 0xf);
  *(undefined4 *)plVar6 = 1;
  plVar3[0x13] = (long)plVar3;
  plVar3[0x16] = (long)plVar3;
  plVar3[0x1c] = (long)puVar1;
  plVar3[0x1d] = (long)plVar6;
  *(undefined4 *)plVar5 = 2;
  plVar3[0x1a] = (long)FUN_00961ad0;
  plVar3[0x1b] = 0;
  plVar3[0x1e] = (long)FUN_00961ad0;
  plVar3[0x1f] = 0;
  plVar3[0x20] = (long)puVar1;
  plVar3[0x21] = (long)plVar5;
  plVar3[0x22] = (long)FUN_00961ad0;
  plVar3[0x23] = 0;
  *(long **)(param_1 + 0x68) = plVar3;
  FUN_00962298(plVar3,&local_30,*(undefined8 *)(param_1 + 0x90),0);
  (**(code **)(**(long **)(param_1 + 0x90) + 0x28))();
  return;
}

