
void FUN_011b74b0(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *__src;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *__src_00;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined1 *__dest;
  long lVar9;
  undefined *local_d8;
  undefined1 *local_d0;
  int local_c8;
  undefined1 local_c4 [63];
  undefined1 local_85;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [16];
  
  FUN_011b9ab0(auStack_60);
  uVar5 = FUN_011b9cd0(auStack_60);
  if ((uVar5 & 1) != 0) {
    uVar3 = FUN_011bac10(auStack_60);
    puVar2 = PTR_DAT_04bb5c90;
    local_70 = PTR_DAT_04bbb9a8 + 0x10;
    lVar7 = *(long *)PTR_DAT_04bb5c90;
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x698);
    if (uVar3 < *(uint *)(lVar7 + 0x678)) {
      local_68 = *(undefined8 *)(*(long *)(lVar7 + 0x680) + (long)(int)uVar3 * 8);
    }
    else {
      local_68 = 0;
    }
    uVar5 = FUN_011a5eb0(&local_70);
    if (((uVar5 & 1) != 0) && (uVar5 = FUN_011a6830(&local_70), (uVar5 & 1) != 0)) {
      lVar7 = *(long *)puVar2;
      if (*(char *)(param_1 + 0x150) == '\0') {
        lVar9 = 0;
        lVar8 = param_1 + 0xb0;
      }
      else if (*(char *)(param_1 + 0x200) == '\0') {
        lVar9 = 1;
        lVar8 = param_1 + 0x160;
      }
      else if (*(char *)(param_1 + 0x2b0) == '\0') {
        lVar9 = 2;
        lVar8 = param_1 + 0x210;
      }
      else if (*(char *)(param_1 + 0x360) == '\0') {
        lVar9 = 3;
        lVar8 = param_1 + 0x2c0;
      }
      else if (*(char *)(param_1 + 0x410) == '\0') {
        lVar9 = 4;
        lVar8 = param_1 + 0x370;
      }
      else if (*(char *)(param_1 + 0x4c0) == '\0') {
        lVar9 = 5;
        lVar8 = param_1 + 0x420;
      }
      else if (*(char *)(param_1 + 0x570) == '\0') {
        lVar9 = 6;
        lVar8 = param_1 + 0x4d0;
      }
      else if (*(char *)(param_1 + 0x620) == '\0') {
        lVar9 = 7;
        lVar8 = param_1 + 0x580;
      }
      else if (*(char *)(param_1 + 0x6d0) == '\0') {
        lVar9 = 8;
        lVar8 = param_1 + 0x630;
      }
      else if (*(char *)(param_1 + 0x780) == '\0') {
        lVar9 = 9;
        lVar8 = param_1 + 0x6e0;
      }
      else if (*(char *)(param_1 + 0x830) == '\0') {
        lVar9 = 10;
        lVar8 = param_1 + 0x790;
      }
      else if (*(char *)(param_1 + 0x8e0) == '\0') {
        lVar9 = 0xb;
        lVar8 = param_1 + 0x840;
      }
      else if (*(char *)(param_1 + 0x990) == '\0') {
        lVar9 = 0xc;
        lVar8 = param_1 + 0x8f0;
      }
      else if (*(char *)(param_1 + 0xa40) == '\0') {
        lVar9 = 0xd;
        lVar8 = param_1 + 0x9a0;
      }
      else if (*(char *)(param_1 + 0xaf0) == '\0') {
        lVar9 = 0xe;
        lVar8 = param_1 + 0xa50;
      }
      else if (*(char *)(param_1 + 0xba0) == '\0') {
        lVar9 = 0xf;
        lVar8 = param_1 + 0xb00;
      }
      else if (*(char *)(param_1 + 0xc50) == '\0') {
        lVar9 = 0x10;
        lVar8 = param_1 + 0xbb0;
      }
      else if (*(char *)(param_1 + 0xd00) == '\0') {
        lVar9 = 0x11;
        lVar8 = param_1 + 0xc60;
      }
      else if (*(char *)(param_1 + 0xdb0) == '\0') {
        lVar9 = 0x12;
        lVar8 = param_1 + 0xd10;
      }
      else {
        if (*(char *)(param_1 + 0xe60) != '\0') {
          return;
        }
        lVar9 = 0x13;
        lVar8 = param_1 + 0xdc0;
      }
      iVar6 = *(int *)(lVar7 + 0x28);
      iVar4 = FUN_011bb170(auStack_60);
      iVar1 = *(int *)(lVar7 + 0x2c);
      iStack_74 = FUN_011bb330(auStack_60);
      iStack_74 = iStack_74 + iVar1;
      local_80 = PTR_DAT_04bb2010 + 0x10;
      local_78 = iVar4 + iVar6;
      __src_00 = (undefined1 *)FUN_011a5fc0(&local_70);
      local_85 = 0;
      local_c8 = 0x40;
      local_d0 = local_c4;
      if (local_c4 == __src_00) {
        lVar7 = 0x3f;
      }
      else {
        lVar7 = 0;
        do {
          if (__src_00[lVar7] == '\0') {
LAB_011b7794:
            iVar6 = (int)lVar7;
            if (0x3f < iVar6) {
              iVar6 = 0x3f;
            }
            goto LAB_011b77a0;
          }
          if (__src_00[lVar7 + 1] == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_011b7794;
          }
          if (__src_00[lVar7 + 2] == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_011b7794;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        iVar6 = 0;
LAB_011b77a0:
        memcpy(local_c4,__src_00,(long)iVar6);
        local_c4[iVar6] = 0;
        lVar7 = (long)local_c8 + -1;
        __src_00 = local_d0;
      }
      __src = local_d0;
      puVar2 = PTR_DAT_04bb2bc0;
      __dest = *(undefined1 **)(lVar8 + 0x50);
      local_d8 = PTR_DAT_04bb2bc0 + 0x10;
      __src_00[lVar7] = 0;
      if (__dest != local_d0) {
        (**(code **)(puVar2 + 0x28))(&local_d8);
        lVar7 = 0;
        do {
          if (local_d0[lVar7] == '\0') goto LAB_011b783c;
          if (local_d0[lVar7 + 1] == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_011b783c;
          }
          if (local_d0[lVar7 + 2] == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_011b783c;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_011b783c:
        iVar6 = (int)lVar7;
        if (*(int *)(lVar8 + 0x58) <= (int)lVar7) {
          iVar6 = *(int *)(lVar8 + 0x58) + -1;
        }
        memcpy(__dest,__src,(long)iVar6);
        __dest[iVar6] = 0;
      }
      FUN_009395b0(0,0,lVar8,&local_80);
      *(undefined4 *)(param_1 + 0xb0 + lVar9 * 0xb0 + 0xa8) = param_2;
    }
  }
  return;
}

