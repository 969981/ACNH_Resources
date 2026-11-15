
void FUN_020d3f90(char *param_1,byte *param_2)

{
  byte *pbVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  
  if (DAT_05574040 == 0) {
    return;
  }
  puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar7 = (**(code **)(*(long *)*puVar10 + 0x38))();
    if (lVar7 == 0) {
      return;
    }
    lVar7 = lVar7 + 0x70;
  }
  else {
    if (puVar10 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar10[0x26] == (long *)0x0) {
      return;
    }
    lVar7 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
    if (lVar7 == 0) {
      return;
    }
  }
  cVar3 = *param_1;
  lVar11 = *(long *)(lVar7 + 0xd0);
  if (lVar11 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
      plVar9 = *(long **)(lVar11 + 0x20);
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      uVar8 = uVar8 & 0xffffffff;
      if (*(long *)(lVar7 + 0xd0) == 0) goto LAB_020d4080;
      plVar9 = *(long **)(*(long *)(lVar7 + 0xd0) + 0x20);
    }
    if (plVar9 != (long *)0x0) {
      local_78 = *(undefined **)(lVar7 + 0xb0);
      pcStack_70 = *(char **)(lVar7 + 0xb8);
      local_68 = 0x1e3388;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
    }
  }
LAB_020d4080:
  puVar6 = PTR_DAT_04bb27d0;
  lVar11 = **(long **)PTR_DAT_04bb27d0;
  bVar4 = *(byte *)(lVar11 + 0x473);
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar11 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
    if (7 < bVar4) {
      pbVar1 = (byte *)(lVar11 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar11 + 0x472) != bVar4)) {
      FUN_020d3c08(*param_1,param_1 + 1,0);
      goto joined_r0x020d4224;
    }
  }
  lVar11 = *(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0);
  lVar2 = lVar11 + ((long)cVar3 & 0xffffffffU) * 0x13230;
  if (9 < (uint)(int)cVar3) {
    lVar2 = lVar11;
  }
  FUN_026b036c(lVar2,0);
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "InducementAtMovingDay";
  FUN_0265d4e0((int)cVar3,param_1 + 1,&local_78,1,0);
  bVar4 = *param_2;
  lVar11 = *(long *)PTR_DAT_04bb6c70 + ((long)(char)bVar4 & 0xffffffffU) * 0x13298;
  if (7 < bVar4) {
    lVar11 = *(long *)PTR_DAT_04bb6c70;
  }
  if (*(char *)(lVar11 + 0x13270) == '\0') {
    FUN_026b1890(lVar11,lVar2);
    FUN_02699290(lVar11);
    FUN_026b26a0(lVar11);
    *(undefined4 *)(lVar11 + 0x13238) = 0;
    *(byte *)(lVar11 + 0x1323d) = bVar4;
    *(undefined1 *)(lVar11 + 0x1323c) = 4;
    *(undefined1 *)(lVar11 + 0x1323e) = 0;
    *(undefined4 *)(lVar11 + 0x13264) = 0;
    *(undefined1 *)(lVar11 + 0x13270) = 1;
    *(long *)(lVar11 + 0x13240) = lVar11;
    *(undefined8 *)(lVar11 + 0x13248) = 0x13230;
  }
  uVar5 = (ulong)local_78 >> 0x30;
  local_78 = (undefined *)CONCAT26((ushort)uVar5 & 0xff00,0xff0000000000);
  if (-1 < DAT_053d09b0) {
    FUN_01db1df0(**(long **)puVar6 + 0x480,DAT_053d09b0,&local_78,param_1,2,0);
  }
  FUN_020d3c08(*param_1,param_1 + 1,1);
joined_r0x020d4224:
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar7 + 0xd0) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar7 + 0xd0) + 0x18), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}

