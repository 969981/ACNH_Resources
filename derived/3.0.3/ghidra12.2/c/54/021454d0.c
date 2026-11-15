
void FUN_021454d0(long param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  float *pfVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  byte local_9c [4];
  undefined4 local_98;
  undefined2 local_94;
  undefined8 local_90;
  long local_88;
  int local_80;
  int iStack_7c;
  int local_78;
  undefined1 local_44 [4];
  
  memset(*(void **)(param_1 + 0x10),0,(long)*(int *)(param_1 + 0xc) << 2);
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_80 = *param_2;
  local_90 = &PTR_FUN_04a75580;
  iVar3 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  local_88 = param_1;
  iStack_7c = param_3;
  local_78 = param_4;
  if (iVar3 != 0) {
    lVar15 = (long)iVar3 << 3;
    puVar14 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_90)(&local_90,*puVar14);
      lVar15 = lVar15 + -8;
      puVar14 = puVar14 + 1;
    } while (lVar15 != 0);
  }
  FUN_02507c6c(&local_90,1,1,1,0);
  puVar11 = PTR_DAT_04bb5038;
  puVar10 = PTR_DAT_04bb4718;
  puVar9 = PTR_DAT_04bb3238;
  uVar16 = (uint)(byte)local_90;
  local_98 = local_90._4_4_;
  local_9c[0] = 0xff;
  if ((byte)local_90 < 8) {
    local_9c[0] = (byte)local_90;
  }
  local_94 = (undefined2)local_88;
  if ((byte)local_90 < 8) {
    do {
      local_44[0] = (undefined1)uVar16;
      piVar1 = (int *)puVar9;
      if (*(long *)puVar10 != 0) {
        piVar1 = (int *)(*(long *)puVar10 + (ulong)uVar16 * 4 + 0xde8);
      }
      if ((*piVar1 != *param_2) &&
         (pfVar12 = (float *)FUN_0251b3b0(local_44,0), pfVar12 != (float *)0x0)) {
        uVar7 = ((int)((float)(int)(*pfVar12 + -2.5) / 5.0) - (uint)(*pfVar12 + -2.5 < 0.0) & 0xffff
                ) - param_3;
        uVar8 = ((int)((float)(int)(pfVar12[2] + -2.5) / 5.0) - (uint)(pfVar12[2] + -2.5 < 0.0) &
                0xffff) - param_4;
        uVar6 = uVar7 - 1;
        if (uVar6 < 0x19) {
          if (uVar8 - 1 < 0x15) {
            uVar5 = uVar6 + *(int *)(param_1 + 0x1c) * (uVar8 - 1);
            uVar4 = 1 << (ulong)(uVar5 & 0x1f);
            uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + (long)((int)uVar5 >> 5) * 4);
            if ((uVar4 & uVar2) == 0) {
              *(uint *)(*(long *)(param_1 + 0x10) + ((long)((ulong)uVar5 << 0x20) >> 0x25) * 4) =
                   uVar4 | uVar2;
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            }
          }
          if (uVar8 < 0x15) {
            uVar5 = uVar6 + *(int *)(param_1 + 0x1c) * uVar8;
            uVar4 = 1 << (ulong)(uVar5 & 0x1f);
            uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + (long)((int)uVar5 >> 5) * 4);
            if ((uVar4 & uVar2) == 0) {
              *(uint *)(*(long *)(param_1 + 0x10) + ((long)((ulong)uVar5 << 0x20) >> 0x25) * 4) =
                   uVar4 | uVar2;
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            }
          }
          if (uVar8 + 1 < 0x15) {
            uVar6 = uVar6 + *(int *)(param_1 + 0x1c) * (uVar8 + 1);
            uVar4 = 1 << (ulong)(uVar6 & 0x1f);
            uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + (long)((int)uVar6 >> 5) * 4);
            if ((uVar4 & uVar2) == 0) {
              *(uint *)(*(long *)(param_1 + 0x10) + ((long)((ulong)uVar6 << 0x20) >> 0x25) * 4) =
                   uVar4 | uVar2;
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            }
          }
        }
        if (uVar7 < 0x19) {
          if (uVar8 - 1 < 0x15) {
            uVar4 = uVar7 + *(int *)(param_1 + 0x1c) * (uVar8 - 1);
            uVar2 = 1 << (ulong)(uVar4 & 0x1f);
            uVar6 = *(uint *)(*(long *)(param_1 + 0x10) + (long)((int)uVar4 >> 5) * 4);
            if ((uVar2 & uVar6) == 0) {
              *(uint *)(*(long *)(param_1 + 0x10) + ((long)((ulong)uVar4 << 0x20) >> 0x25) * 4) =
                   uVar2 | uVar6;
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            }
          }
          if (uVar8 < 0x15) {
            uVar4 = uVar7 + *(int *)(param_1 + 0x1c) * uVar8;
            uVar2 = 1 << (ulong)(uVar4 & 0x1f);
            uVar6 = *(uint *)(*(long *)(param_1 + 0x10) + (long)((int)uVar4 >> 5) * 4);
            if ((uVar2 & uVar6) == 0) {
              *(uint *)(*(long *)(param_1 + 0x10) + ((long)((ulong)uVar4 << 0x20) >> 0x25) * 4) =
                   uVar2 | uVar6;
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            }
          }
          if (uVar8 + 1 < 0x15) {
            uVar4 = uVar7 + *(int *)(param_1 + 0x1c) * (uVar8 + 1);
            uVar2 = 1 << (ulong)(uVar4 & 0x1f);
            uVar6 = *(uint *)(*(long *)(param_1 + 0x10) + (long)((int)uVar4 >> 5) * 4);
            if ((uVar2 & uVar6) == 0) {
              *(uint *)(*(long *)(param_1 + 0x10) + ((long)((ulong)uVar4 << 0x20) >> 0x25) * 4) =
                   uVar2 | uVar6;
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            }
          }
        }
        uVar7 = uVar7 + 1;
        if (uVar7 < 0x19) {
          if (uVar8 - 1 < 0x15) {
            uVar4 = uVar7 + *(int *)(param_1 + 0x1c) * (uVar8 - 1);
            uVar2 = 1 << (ulong)(uVar4 & 0x1f);
            uVar6 = *(uint *)(*(long *)(param_1 + 0x10) + (long)((int)uVar4 >> 5) * 4);
            if ((uVar2 & uVar6) == 0) {
              *(uint *)(*(long *)(param_1 + 0x10) + ((long)((ulong)uVar4 << 0x20) >> 0x25) * 4) =
                   uVar2 | uVar6;
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            }
          }
          if (uVar8 < 0x15) {
            uVar4 = uVar7 + *(int *)(param_1 + 0x1c) * uVar8;
            uVar2 = 1 << (ulong)(uVar4 & 0x1f);
            uVar6 = *(uint *)(*(long *)(param_1 + 0x10) + (long)((int)uVar4 >> 5) * 4);
            if ((uVar2 & uVar6) == 0) {
              *(uint *)(*(long *)(param_1 + 0x10) + ((long)((ulong)uVar4 << 0x20) >> 0x25) * 4) =
                   uVar2 | uVar6;
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            }
          }
          if (uVar8 + 1 < 0x15) {
            uVar7 = uVar7 + *(int *)(param_1 + 0x1c) * (uVar8 + 1);
            uVar8 = 1 << (ulong)(uVar7 & 0x1f);
            uVar6 = *(uint *)(*(long *)(param_1 + 0x10) + (long)((int)uVar7 >> 5) * 4);
            if ((uVar8 & uVar6) == 0) {
              *(uint *)(*(long *)(param_1 + 0x10) + ((long)((ulong)uVar7 << 0x20) >> 0x25) * 4) =
                   uVar8 | uVar6;
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            }
          }
        }
      }
      uVar17 = (ulong)uVar16;
      do {
        if (uVar17 == 7) {
          return;
        }
        uVar17 = uVar17 + 1;
        uVar13 = FUN_02507924(local_9c,puVar11 + uVar17);
      } while ((uVar13 & 1) == 0);
      local_9c[0] = puVar11[uVar17];
      uVar16 = (uint)local_9c[0];
    } while (uVar16 < 8);
  }
  return;
}

