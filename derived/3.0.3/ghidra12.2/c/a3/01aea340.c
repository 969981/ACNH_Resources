
undefined8 FUN_01aea340(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined *puVar7;
  
  if (((DAT_0532a958 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0532a958), iVar2 != 0)) {
    DAT_0532a948 = PTR_DAT_04bb2020 + 0x10;
    DAT_0532a950 = "FtrPostAnimation";
    __cxa_guard_release(&DAT_0532a958);
  }
  puVar4 = *(uint **)(param_1 + 0x10);
  if (puVar4 == (uint *)0x0) {
    return 0;
  }
  uVar5 = *puVar4;
  if (uVar5 == 0 || puVar4 == (uint *)(ulong)uVar5) {
LAB_01aea37c:
    uVar5 = 0;
  }
  else {
    puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar5);
    uVar5 = 0;
    if (*puVar6 != 0) {
      uVar5 = puVar6[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar5 != 0) {
            uVar3 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar5);
          }
          if (*puVar6 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
             (uVar5 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2),
             uVar5 < 0x52)) goto LAB_01aea380;
        }
      }
      goto LAB_01aea37c;
    }
  }
LAB_01aea380:
  if (param_2 == 0) {
    return 0;
  }
  if (4 < uVar5 - 0x37) {
    return 0;
  }
  uVar5 = *puVar4;
  uVar3 = 0;
  if ((uVar5 != 0) && (puVar4 != (uint *)(ulong)uVar5)) {
    puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar5);
    uVar3 = 0;
    if (*puVar6 != 0) {
      uVar5 = puVar6[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar5 != 0) {
            uVar3 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar5);
          }
          if (*puVar6 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
             (uVar3 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2),
             uVar3 < 0x52)) goto LAB_01aea448;
        }
      }
      uVar3 = 0;
    }
  }
LAB_01aea448:
  if (uVar3 - 0x37 < 5) {
    puVar7 = (&PTR_FUN_04a36b70)[(int)(uVar3 - 0x37)];
    (**(code **)(DAT_0532a948 + 0x18))(&DAT_0532a948);
    FUN_038d1270(param_2,puVar7,DAT_0532a950);
  }
  return 1;
}

