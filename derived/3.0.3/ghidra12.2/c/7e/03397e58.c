
undefined8 * FUN_03397e58(long *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (DAT_05742720 != (undefined8 *)0x0) {
    return DAT_05742720;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x88);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_03397ee0;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x88,8);
  }
LAB_03397ee0:
  FUN_038c69f0(puVar4 + 0xd,param_1,3);
  DAT_05742708 = puVar4 + 0xd;
  *puVar4 = &PTR_LAB_04b23eb0;
  *(undefined1 *)(puVar4 + 1) = 0;
  *(undefined4 *)(puVar4 + 2) = 0;
  bVar1 = DAT_0548e140;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined4 *)(puVar4 + 5) = 0;
  puVar4[0xd] = &PTR_FUN_04b23e90;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  if (7 < bVar1) {
    bVar1 = 0xff;
  }
  puVar4[8] = 0;
  puVar4[9] = 0;
  DAT_05742720 = puVar4;
  *(byte *)((long)puVar4 + 0xc) = bVar1;
  *(byte *)((long)puVar4 + 0x14) = bVar1;
  *(byte *)((long)puVar4 + 0x1c) = bVar1;
  *(byte *)((long)puVar4 + 0x24) = bVar1;
  *(byte *)((long)puVar4 + 0x2c) = bVar1;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  return puVar4;
}

