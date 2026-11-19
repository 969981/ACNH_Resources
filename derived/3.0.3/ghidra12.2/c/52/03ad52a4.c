
undefined8 FUN_03ad52a4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  lVar5 = DAT_05ae7600;
  uVar9 = *(undefined8 *)(*(long *)PTR_DAT_04bb4e50 + 0x58);
  if (DAT_05ae7600 == 0) {
    puVar8 = malloc(0x88);
  }
  else {
    plVar7 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar5 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x88,8);
  }
  puVar4 = PTR_DAT_04bb2f80;
  puVar8[2] = 0;
  puVar8[3] = 0;
  uVar1 = *(undefined8 *)(puVar4 + 0x10);
  uVar3 = *(undefined8 *)(puVar4 + 0x18);
  uVar2 = *(undefined8 *)(puVar4 + 0x20);
  puVar8[0xc] = *(undefined8 *)(puVar4 + 0x28);
  puVar8[10] = uVar3;
  puVar8[0xb] = uVar2;
  uVar2 = *(undefined8 *)puVar4;
  uVar3 = *(undefined8 *)(puVar4 + 8);
  puVar8[6] = 0;
  puVar8[7] = uVar2;
  puVar8[8] = uVar3;
  puVar8[9] = uVar1;
  puVar8[4] = 0;
  *(undefined4 *)(puVar8 + 5) = 0;
  *(undefined1 *)(puVar8 + 0xd) = 0;
  *(undefined8 *)((long)puVar8 + 0x6c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)((long)puVar8 + 0x74) = 0xff7fffff7f7fffff;
  *(undefined8 *)((long)puVar8 + 0x7c) = 0xff7fffffff7fffff;
  *puVar8 = &PTR_FUN_04b71948;
  puVar8[1] = 0;
  *(undefined8 **)(param_1 + 0x10) = puVar8;
  FUN_03ae0cb0(puVar8,param_1,param_2,param_3,uVar9);
  return *(undefined8 *)(param_1 + 0x10);
}

