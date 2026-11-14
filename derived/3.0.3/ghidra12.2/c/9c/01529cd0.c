
void FUN_01529cd0(long param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  void *__src;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  void *__dest;
  undefined4 local_60 [4];
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint *local_40;
  uint local_34;
  
  puVar4 = PTR_DAT_04bb43c0;
  uStack_44 = *(undefined4 *)(param_1 + 0x12a0);
  local_40 = (uint *)0x0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_48 = *(undefined4 *)(param_1 + 0x129c);
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_48);
  lVar7 = DAT_0532a768;
  if (*(long *)puVar4 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      uVar5 = FUN_0277d6c4(param_1 + 0x129c);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
         (puVar6 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar6 != (uint *)0x0)) {
        uVar5 = *puVar6;
        local_40 = puVar6;
        if (uVar5 != 0 && puVar6 != (uint *)(ulong)uVar5) {
          puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
          if (((*puVar8 != 0) && (uVar5 = puVar8[1], uVar5 != 0)) && ((ulong)(ushort)puVar8[2] != 0)
             ) {
            lVar7 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar7 = 0x1c;
            }
            lVar7 = (long)puVar8 + lVar7 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar7 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)puVar6 - lVar7) / (ulong)uVar5);
              }
              if (*puVar8 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_34 = (uint)uVar3,
                 uVar3 < 0xbd)) goto LAB_01529e38;
            }
          }
        }
        local_34 = 0;
        goto LAB_01529e38;
      }
    }
  }
  local_34 = 0xbc;
LAB_01529e38:
  local_60[0] = 0x75;
  if (local_34 == 0x75) {
    __dest = *(void **)(param_1 + 0x280);
    (**(code **)(DAT_0520f1c8 + 0x18))(&DAT_0520f1c8);
    __src = DAT_0520f1d0;
    if (__dest != DAT_0520f1d0) {
      (**(code **)(DAT_0520f1c8 + 0x18))(&DAT_0520f1c8);
      lVar7 = 0;
      do {
        if (*(char *)((long)DAT_0520f1d0 + lVar7) == '\0') goto LAB_01529ed0;
        if (*(char *)((long)DAT_0520f1d0 + lVar7 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_01529ed0;
        }
        if (*(char *)((long)DAT_0520f1d0 + lVar7 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_01529ed0;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_01529ed0:
      iVar1 = (int)lVar7;
      if (*(int *)(param_1 + 0x288) <= (int)lVar7) {
        iVar1 = *(int *)(param_1 + 0x288) + -1;
      }
      memcpy(__dest,__src,(long)iVar1);
      *(undefined1 *)((long)__dest + (long)iVar1) = 0;
    }
    *(undefined4 *)(param_1 + 0x10d8) = 0;
    FUN_01adf970(local_60,&local_50);
    lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
    if (lVar7 != 0) {
      FUN_0074ed40(lVar7,local_60,0);
    }
  }
  return;
}

