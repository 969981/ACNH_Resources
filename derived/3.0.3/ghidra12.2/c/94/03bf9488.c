
/* WARNING: Removing unreachable block (ram,0x03bf9564) */

undefined8 * FUN_03bf9488(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  if (DAT_05aec390 != (undefined8 *)0x0) {
    return DAT_05aec390;
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar5 = malloc(0x70);
  }
  else {
    plVar4 = param_1;
    if (param_1 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar5 = (undefined8 *)0x0;
        goto LAB_03bf9514;
      }
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x70,8);
  }
LAB_03bf9514:
  FUN_038c69f0(puVar5 + 10,param_1,3);
  puVar5[10] = &PTR_FUN_04b7c0b8;
  DAT_05aec388 = puVar5 + 10;
  puVar5[2] = 0;
  *puVar5 = &PTR_LAB_04b7c0d8;
  puVar5[1] = 0;
  *(undefined1 *)(puVar5 + 5) = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  *(undefined4 *)(puVar5 + 6) = 0;
  *(undefined4 *)((long)puVar5 + 0x29) = 0;
  *(undefined1 *)((long)puVar5 + 0x2d) = 0;
  *(undefined1 *)(puVar5 + 9) = 0;
  *(undefined4 *)((long)puVar5 + 0x4c) = 0;
  puVar5[7] = 0;
  puVar5[8] = 0x100000000;
  uVar6 = (**(code **)(*DAT_05aed938 + 0x10))();
  if ((uVar6 & 1) != 0) {
    uVar1 = *(undefined8 *)(DAT_05aed930 + 0x110);
    uVar2 = *(undefined8 *)(DAT_05aed930 + 0x118);
    puVar5[2] = *(undefined8 *)(DAT_05aed930 + 0x108);
    puVar5[3] = uVar1;
    puVar5[4] = uVar2;
  }
  DAT_05aec390 = puVar5;
  return puVar5;
}

