
/* WARNING: Removing unreachable block (ram,0x0178ceb4) */
/* WARNING: Removing unreachable block (ram,0x0178ce7c) */
/* WARNING: Removing unreachable block (ram,0x0178ce4c) */
/* WARNING: Removing unreachable block (ram,0x0178cef8) */
/* WARNING: Removing unreachable block (ram,0x0178cd1c) */
/* WARNING: Removing unreachable block (ram,0x0178ccb8) */
/* WARNING: Removing unreachable block (ram,0x0178cc08) */
/* WARNING: Removing unreachable block (ram,0x0178cca4) */
/* WARNING: Removing unreachable block (ram,0x0178cd00) */
/* WARNING: Removing unreachable block (ram,0x0178cd30) */
/* WARNING: Removing unreachable block (ram,0x0178cf0c) */
/* WARNING: Removing unreachable block (ram,0x0178ce68) */
/* WARNING: Removing unreachable block (ram,0x0178ce98) */
/* WARNING: Removing unreachable block (ram,0x0178cec8) */
/* WARNING: Removing unreachable block (ram,0x0178cbf0) */

void FUN_0178c9e0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  short sVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  char cVar14;
  uint *puVar15;
  long *plVar16;
  undefined4 local_38;
  undefined1 auStack_34 [2];
  undefined1 auStack_32 [2];
  
  puVar8 = PTR_DAT_04bb5ce0;
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x60) == 0) {
    return;
  }
  lVar12 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar12 == 0) {
    if (*(byte *)(param_1 + 0x5d0) == 0) goto LAB_0178ca70;
LAB_0178ca64:
    *(undefined1 *)(param_1 + 0x5d0) = 0;
LAB_0178ca78:
    *(undefined1 *)(param_1 + 0x5d1) = 0;
    if ((((*(char *)(param_1 + 0x6a0) == '\0') &&
         (uVar10 = (uint)*(ushort *)(param_1 + 0x290) - (uint)*(ushort *)(DAT_05293a70 + 0x400),
         uVar10 < *(uint *)(DAT_05293a70 + 0x3e0))) &&
        (puVar13 = *(uint **)(*(long *)(DAT_05293a70 + 1000) + (long)(int)uVar10 * 8),
        puVar13 != (uint *)0x0)) &&
       (uVar10 = *puVar13, uVar10 != 0 && puVar13 != (uint *)(ulong)uVar10)) {
      puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar10);
      if (((*puVar15 != 0) && (uVar10 = puVar15[1], uVar10 != 0)) &&
         ((ulong)(ushort)puVar15[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar15 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar15 + lVar1 + (ulong)(ushort)puVar15[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar10 != 0) {
            uVar2 = (uint)((ulong)((long)puVar13 - lVar1) / (ulong)uVar10);
          }
          if (*puVar15 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05293008) && (*(short *)(DAT_05293010 + (long)(int)uVar2 * 2) == 3)) {
            if (lVar12 != 0) {
              if (*(int *)(lVar12 + 0xeec) == 0) {
                *(undefined4 *)(lVar12 + 0xef0) = 0;
              }
              else {
                *(undefined4 *)(lVar12 + 0xef4) = 0;
              }
              if ((*(uint *)(lVar12 + 0xee0) < 4) && (*(uint *)(lVar12 + 0xee0) != 2)) {
                plVar16 = *(long **)(param_2 + 0x60);
                if (plVar16[0x227] != 0) {
                  FUN_038501b0(0x41200000,plVar16[0x227],0);
                  lVar12 = plVar16[0x227];
                  if (*(char *)(lVar12 + 0x2c0) != '\0') {
                    *(undefined1 *)(lVar12 + 0x2c0) = 0;
                    FUN_03855b20(lVar12 + 0xc0,0);
                  }
                  puVar9 = PTR_DAT_04bbe380;
                  FUN_0384f8c0(lVar12,PTR_DAT_04bbe380,0,0);
                  (**(code **)(*plVar16 + 0x120))(plVar16,puVar9,10,0);
                }
                if (*(short *)(param_1 + 0x290) == 0xe5) {
                  local_38 = 2;
                  *(undefined1 *)(param_1 + 0x68c) = 0;
                  *(undefined4 *)(param_1 + 0x688) = 1;
                }
                goto LAB_0178ccc0;
              }
            }
            plVar16 = *(long **)(param_2 + 0x60);
            if (plVar16[0x227] != 0) {
              FUN_038501b0(0x41200000,plVar16[0x227],0);
              lVar12 = plVar16[0x227];
              if (*(char *)(lVar12 + 0x2c0) != '\0') {
                *(undefined1 *)(lVar12 + 0x2c0) = 0;
                FUN_03855b20(lVar12 + 0xc0,0);
              }
              puVar9 = PTR_DAT_04bbe378;
              FUN_0384f8c0(lVar12,PTR_DAT_04bbe378,0,0);
              (**(code **)(*plVar16 + 0x120))(plVar16,puVar9,10,0);
            }
            if (*(short *)(param_1 + 0x290) == 0xe5) {
              local_38 = 1;
              *(undefined1 *)(param_1 + 0x684) = 0;
              *(undefined4 *)(param_1 + 0x680) = 1;
            }
          }
        }
      }
    }
  }
  else {
    uVar10 = *(uint *)(lVar12 + 0xee0);
    if ((uint)*(byte *)(param_1 + 0x5d0) != ((uint)(uVar10 < 4) & 0xbU >> (ulong)(uVar10 & 0xf))) {
      if (3 < uVar10) goto LAB_0178ca64;
      *(byte *)(param_1 + 0x5d0) = (byte)(0xb >> (ulong)(uVar10 & 0xf)) & 1;
      goto LAB_0178ca78;
    }
LAB_0178ca70:
    if (*(char *)(param_1 + 0x5d1) != '\0') goto LAB_0178ca78;
  }
LAB_0178ccc0:
  FUN_00759290(param_1 + 0x2a0);
  FUN_0178bc94(param_1,*(undefined8 *)(param_2 + 0x60));
  sVar6 = *(short *)(param_1 + 0x290);
  if (sVar6 == 0xe5) {
    if (*(char *)(param_1 + 0x684) != '\0') {
      *(undefined1 *)(param_1 + 0x684) = 0;
      *(undefined4 *)(param_1 + 0x680) = 0;
    }
    local_38 = 2;
    if (*(char *)(param_1 + 0x68c) != '\0') {
      local_38 = 2;
      *(undefined1 *)(param_1 + 0x68c) = 0;
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
  }
  else {
    if (sVar6 != 0xf9) goto LAB_0178cf1c;
    plVar16 = *(long **)(param_2 + 0x60);
    if (*(char *)(param_1 + 0x67c) != '\0') {
      *(undefined1 *)(param_1 + 0x67c) = 0;
      *(undefined4 *)(param_1 + 0x678) = 0;
    }
    local_38 = 0;
    uVar10 = nn::os::GetSystemTick();
    lVar12 = *(long *)puVar8;
    cVar5 = *(char *)(lVar12 + 0xfe8);
    cVar14 = *(char *)(param_1 + 0x674);
    if (*(char *)(param_1 + 0x674) != cVar5) {
      uVar2 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
      uVar10 = uVar2 ^ uVar2 * 0x800;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
      if (*(float *)(lVar12 + 0xd2c) <=
          (float)((uVar10 >> 8 ^ uVar2 >> 0x13 ^ uVar10 ^ uVar2) >> 9 | 0x3f800000) + -1.0) {
        cVar14 = cVar5;
      }
      else {
        *(char *)(param_1 + 0x674) = cVar5;
        if (plVar16[0x227] != 0) {
          FUN_038501b0(0x41200000,plVar16[0x227],1);
          lVar12 = plVar16[0x227];
          if (*(char *)(lVar12 + 0x2c0) != '\0') {
            *(undefined1 *)(lVar12 + 0x2c0) = 0;
            FUN_03855b20(lVar12 + 0xc0,0);
          }
          puVar9 = PTR_DAT_04bbe370;
          FUN_0384f8c0(lVar12,PTR_DAT_04bbe370,1,0);
          (**(code **)(*plVar16 + 0x120))(plVar16,puVar9,10,1);
          lVar12 = *(long *)puVar8;
        }
        cVar14 = *(char *)(lVar12 + 0xfe8);
      }
    }
    if (*(char *)(param_1 + 0x675) != cVar14) {
      *(char *)(param_1 + 0x675) = cVar14;
      local_38 = 0;
      *(undefined1 *)(param_1 + 0x67c) = 0;
      *(undefined4 *)(param_1 + 0x678) = 1;
    }
  }
  sVar6 = *(short *)(param_1 + 0x290);
LAB_0178cf1c:
  if ((sVar6 == 0xf8) && (*(char *)(param_1 + 0x28) != *(char *)(param_1 + 0x20))) {
    plVar16 = *(long **)(param_2 + 0x60);
    *(char *)(param_1 + 0x28) = *(char *)(param_1 + 0x20);
    if (plVar16[0x227] != 0) {
      FUN_038501b0(0x41200000,plVar16[0x227],1);
      lVar12 = plVar16[0x227];
      if (*(char *)(lVar12 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar12 + 0x2c0) = 0;
        FUN_03855b20(lVar12 + 0xc0,0);
      }
      puVar9 = PTR_DAT_04bbe388;
      FUN_0384f8c0(lVar12,PTR_DAT_04bbe388,1,0);
      (**(code **)(*plVar16 + 0x120))(plVar16,puVar9,10,1);
      if (plVar16[0x227] != 0) {
        FUN_0384ff0c((float)*(int *)(param_1 + 0x24),plVar16[0x227],1);
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x6a4);
  *(int *)(param_1 + 0x6a4) = iVar3 + 1;
  if (0x13 < iVar3) {
    uVar7 = *(undefined2 *)(param_1 + 0x290);
    *(undefined4 *)(param_1 + 0x6a4) = 0;
    FUN_007ef010(auStack_34,param_1 + 0x292);
    lVar12 = *(long *)puVar8;
    if (lVar12 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x294);
      cVar5 = *(char *)(param_1 + 0x351);
      FUN_007ef010(auStack_32,auStack_34);
      if (*(char *)(lVar12 + 0xee4) != '\0') {
        FUN_007ef010(&local_38,auStack_32);
        uVar11 = FUN_017f976c(lVar12 + 0xda0,uVar7,&local_38,uVar4,cVar5 != '\0');
        if ((uVar11 & 1) != 0) {
          FUN_0152427c();
        }
      }
    }
  }
  return;
}

