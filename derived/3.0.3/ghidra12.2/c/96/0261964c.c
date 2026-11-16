
void FUN_0261964c(void *param_1,int *param_2)

{
  ushort *puVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  
  memset(param_1,0,0x200);
  uVar10 = 0x4c7b;
  *(undefined4 *)((long)param_1 + 0x202) = 0x101;
  *(undefined4 *)((long)param_1 + 0x208) = 0x101;
  *(undefined2 *)((long)param_1 + 0x200) = 0x4c7b;
  *(undefined2 *)((long)param_1 + 0x206) = 0x4c7b;
  *(undefined2 *)((long)param_1 + 0x20c) = 0x4c7b;
  *(undefined8 *)((long)param_1 + 0x20e) = 0x1014c7b00000101;
  memset((void *)((long)param_1 + 0x216),0,0x802);
  uVar4 = nn::os::GetSystemTick();
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0xa18) = uVar4;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0xa1c) = uVar4;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0xa20) = uVar4;
  *(uint *)((long)param_1 + 0xa24) = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  iVar2 = *param_2;
  *(undefined4 *)((long)param_1 + 0xa2c) = 0;
  *(int *)((long)param_1 + 0xa28) = iVar2;
  puVar3 = PTR_DAT_04bb46b0;
  if (((*param_2 == -1) || (*(long *)PTR_DAT_04bb46b0 == 0)) || (lVar6 = FUN_026eec4c(), lVar6 == 0)
     ) {
    uVar11 = 0;
    uVar4 = 1;
    uVar12 = 1;
  }
  else {
    lVar9 = lVar6 + 0x194b0;
    if (*(long *)(lVar6 + 0x194b8) == 0) {
      lVar9 = *(long *)(*(long *)puVar3 + 0x20);
    }
    if (*(long **)(lVar9 + 0x2d1d0) == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      puVar7 = (undefined8 *)**(long **)(lVar9 + 0x2d1d0);
      uVar8 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar8 = (**(code **)*puVar7)();
      }
    }
    puVar1 = (ushort *)(*(long *)(lVar9 + 0x2d1b8) + *(long *)(lVar9 + 0x2d1b0));
    uVar10 = (uint)*puVar1;
    uVar12 = (uint)(byte)puVar1[1];
    uVar4 = (uint)*(byte *)((long)puVar1 + 3);
    uVar11 = (ushort)*(byte *)((long)puVar1 + 5);
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar9 + 0x2d1d0) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x2d1d0) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  *(ushort *)((long)param_1 + 0x204) = uVar11 << 8;
  *(uint *)((long)param_1 + 0x200) = uVar12 << 0x10 | uVar4 << 0x18 | uVar10;
  if (((*param_2 == -1) || (*(long *)puVar3 == 0)) || (lVar6 = FUN_026eec4c(), lVar6 == 0)) {
    uVar11 = 0;
    uVar4 = 0x4c7b;
    uVar10 = 1;
    uVar12 = 1;
  }
  else {
    lVar9 = lVar6 + 0x194b0;
    if (*(long *)(lVar6 + 0x194b8) == 0) {
      lVar9 = *(long *)(*(long *)puVar3 + 0x20);
    }
    if ((*(long **)(lVar9 + 0x2d208) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar9 + 0x2d208), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    puVar1 = (ushort *)(*(long *)(lVar9 + 0x2d1f0) + *(long *)(lVar9 + 0x2d1e8));
    uVar4 = (uint)*puVar1;
    uVar12 = (uint)(byte)puVar1[1];
    uVar10 = (uint)*(byte *)((long)puVar1 + 3);
    uVar11 = (ushort)*(byte *)((long)puVar1 + 5);
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar9 + 0x2d208) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x2d208) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  *(ushort *)((long)param_1 + 0x20a) = uVar11 << 8;
  *(uint *)((long)param_1 + 0x206) = uVar12 << 0x10 | uVar10 << 0x18 | uVar4;
  if (((*param_2 == -1) || (*(long *)puVar3 == 0)) || (lVar6 = FUN_026eec4c(), lVar6 == 0)) {
    uVar11 = 0;
    uVar4 = 0x4c7b;
    uVar10 = 1;
    uVar12 = 1;
  }
  else {
    lVar9 = lVar6 + 0x194b0;
    if (*(long *)(lVar6 + 0x194b8) == 0) {
      lVar9 = *(long *)(*(long *)puVar3 + 0x20);
    }
    if ((*(long **)(lVar9 + 0x2d240) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar9 + 0x2d240), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    puVar1 = (ushort *)(*(long *)(lVar9 + 0x2d228) + *(long *)(lVar9 + 0x2d220));
    uVar4 = (uint)*puVar1;
    uVar12 = (uint)(byte)puVar1[1];
    uVar10 = (uint)*(byte *)((long)puVar1 + 3);
    uVar11 = (ushort)*(byte *)((long)puVar1 + 5);
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar9 + 0x2d240) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x2d240) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  *(ushort *)((long)param_1 + 0x210) = uVar11 << 8;
  *(uint *)((long)param_1 + 0x20c) = uVar12 << 0x10 | uVar10 << 0x18 | uVar4;
  if (((*param_2 == -1) || (*(long *)puVar3 == 0)) || (lVar6 = FUN_026eec4c(), lVar6 == 0)) {
    uVar11 = 0;
    uVar4 = 0x4c7b;
    uVar10 = 1;
    uVar12 = 1;
  }
  else {
    lVar9 = lVar6 + 0x194b0;
    if (*(long *)(lVar6 + 0x194b8) == 0) {
      lVar9 = *(long *)(*(long *)puVar3 + 0x20);
    }
    if ((*(long **)(lVar9 + 0x2d278) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar9 + 0x2d278), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    puVar1 = (ushort *)(*(long *)(lVar9 + 0x2d260) + *(long *)(lVar9 + 0x2d258));
    uVar4 = (uint)*puVar1;
    uVar12 = (uint)(byte)puVar1[1];
    uVar10 = (uint)*(byte *)((long)puVar1 + 3);
    uVar11 = (ushort)*(byte *)((long)puVar1 + 5);
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar9 + 0x2d278) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x2d278) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  *(ushort *)((long)param_1 + 0x216) = uVar11 << 8;
  *(uint *)((long)param_1 + 0x212) = uVar12 << 0x10 | uVar10 << 0x18 | uVar4;
  FUN_0262af20(DAT_055588d0,param_1,param_2,DAT_055588d0 + 0xe98e0);
  FUN_0262af20(DAT_055588d0,(long)param_1 + 0x100,param_2,DAT_055588d0 + 0xe99e0);
  return;
}

