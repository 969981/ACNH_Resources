
ushort FUN_01a11dd8(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  
  if (((param_2 == 0xfffe) || (*(undefined8 **)(param_1 + 0x20) == (undefined8 *)0x0)) ||
     (*(int *)(param_1 + 0x18) == 0)) {
    return 0;
  }
  puVar9 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
  if (((DAT_052d2590 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052d2590), iVar5 != 0)) {
    DAT_052d2588 = &PTR_LAB_049fa588;
    __cxa_guard_release(&DAT_052d2590);
  }
  if (((puVar9 != (undefined8 *)0x0) &&
      (uVar6 = (**(code **)*puVar9)(puVar9,&DAT_052d2588), (uVar6 & 1) != 0)) &&
     ((uVar4 = (param_2 & 0xffff) - (uint)*(ushort *)(puVar9 + 0x3f),
      uVar4 < *(uint *)(puVar9 + 0x3b) &&
      ((puVar7 = *(uint **)(puVar9[0x3c] + (long)(int)uVar4 * 8), puVar7 != (uint *)0x0 &&
       (uVar4 = *puVar7, uVar4 != 0 && puVar7 != (uint *)(ulong)uVar4)))))) {
    puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
    if ((*puVar8 != 0) && ((uVar4 = puVar8[1], uVar4 != 0 && ((ulong)(ushort)puVar8[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar4);
        }
        if (*puVar8 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_052d1ee8) &&
           (uVar3 = *(ushort *)(DAT_052d1ef0 + (long)(int)uVar2 * 2), uVar3 < 7)) {
          return uVar3;
        }
      }
    }
  }
  return 0;
}

