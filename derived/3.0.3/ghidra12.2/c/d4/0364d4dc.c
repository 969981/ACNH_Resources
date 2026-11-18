
void FUN_0364d4dc(long *param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  param_2 = param_2 & 0xe001;
  if (param_2 < 0xc000) {
    if (param_2 < 0xa000) {
      if (param_2 == 0x8000) {
        bVar6 = *(byte *)(param_1 + 2);
        uVar8 = param_3 >> 7 & 1;
        uVar7 = param_3 >> 6 & 1;
        bVar4 = *(byte *)(param_1 + 1);
        *(char *)(param_1 + 2) = (char)uVar8;
        *(char *)(param_1 + 1) = (char)uVar7;
        *(uint *)((long)param_1 + 0xc) = param_3 & 7;
        if (bVar6 != uVar8) {
          FUN_0364ca94(param_1);
          uVar7 = (uint)*(byte *)(param_1 + 1);
        }
        if (bVar4 != uVar7) {
          lVar11 = *param_1;
          uVar8 = 0x8000;
          if (uVar7 != 0) {
            uVar8 = 0xc000;
          }
          uVar9 = 0xc000;
          if (uVar7 != 0) {
            uVar9 = 0x8000;
          }
          lVar1 = lVar11 + 0x2a8 + (ulong)(uVar8 >> 10) * 0x10;
          uVar7 = *(uint *)(lVar11 + 0x738) & 0xffffe000;
          uVar2 = *(int *)(lVar11 + (ulong)(uVar8 >> 10) * 4 + 0x6b8) - 1U &
                  (uint)*(byte *)((long)param_1 + 0x17) << 0xd;
          FUN_03653cb0(lVar11 + 0x2a8,uVar8,*(undefined8 *)(lVar1 + 0x18),0x2000,uVar2,
                       *(char *)(lVar1 + 0x10) == '\0');
          *(char *)((long)param_1 + 0x17) = (char)(uVar2 >> 0xd);
          lVar11 = *param_1;
          uVar8 = *(int *)(lVar11 + 0x758) - 1U & (uint)*(byte *)(param_1 + 3) << 0xd;
          FUN_03653cb0(lVar11 + 0x2a8,0xa000,*(undefined8 *)(lVar11 + 0x540),0x2000,uVar8,
                       *(char *)(lVar11 + 0x538) == '\0');
          lVar1 = *param_1 + 0x2a8;
          lVar11 = lVar1 + (ulong)(uVar9 >> 10) * 0x10;
          *(char *)(param_1 + 3) = (char)(uVar8 >> 0xd);
          FUN_03653cb0(lVar1,uVar9,*(undefined8 *)(lVar11 + 0x18),0x2000,
                       *(int *)(lVar1 + (ulong)(uVar9 >> 10) * 4 + 0x410) - 1U & uVar7 - 0x4000,
                       *(char *)(lVar11 + 0x10) == '\0');
          lVar11 = *param_1;
          FUN_03653cb0(lVar11 + 0x2a8,0xe000,*(undefined8 *)(lVar11 + 0x640),0x2000,
                       *(int *)(lVar11 + 0x798) - 1U & uVar7 - 0x2000,
                       *(char *)(lVar11 + 0x638) == '\0');
          return;
        }
      }
      else {
        uVar8 = *(uint *)((long)param_1 + 0xc);
        uVar10 = (ulong)uVar8;
        if (uVar8 < 2) {
          lVar11 = param_1[2];
          *(char *)((long)param_1 + uVar10 + 0x11) = (char)(param_3 >> 1);
          puVar3 = &DAT_041974a8;
          if ((char)lVar11 != '\0') {
            puVar3 = &DAT_041974c0;
          }
          lVar11 = *param_1 + 0x2a8;
          uVar12 = (ulong)(*(uint *)(puVar3 + uVar10 * 4) >> 10);
          lVar1 = lVar11 + uVar12 * 0x10;
          uVar8 = *(int *)(lVar11 + uVar12 * 4 + 0x410) - 1U & param_3 << 10;
          FUN_03653cb0(lVar11,*(uint *)(puVar3 + uVar10 * 4),*(undefined8 *)(lVar1 + 0x18),0x800,
                       uVar8 & 0x7f800,*(char *)(lVar1 + 0x10) == '\0');
          bVar6 = (byte)(uVar8 >> 0xb);
        }
        else if (uVar8 < 6) {
          lVar11 = param_1[2];
          *(byte *)((long)param_1 + uVar10 + 0x11) = (byte)param_3;
          puVar3 = &DAT_041974a8;
          if ((char)lVar11 != '\0') {
            puVar3 = &DAT_041974c0;
          }
          lVar11 = *param_1 + 0x2a8;
          uVar12 = (ulong)(*(uint *)(puVar3 + uVar10 * 4) >> 10);
          lVar1 = lVar11 + uVar12 * 0x10;
          uVar8 = *(int *)(lVar11 + uVar12 * 4 + 0x410) - 1U & param_3 << 10;
          FUN_03653cb0(lVar11,*(uint *)(puVar3 + uVar10 * 4),*(undefined8 *)(lVar1 + 0x18),0x400,
                       uVar8 & 0x3fc00,*(char *)(lVar1 + 0x10) == '\0');
          bVar6 = (byte)(uVar8 >> 10);
        }
        else {
          lVar11 = param_1[1];
          *(byte *)((long)param_1 + uVar10 + 0x11) = (byte)param_3 & 0x3f;
          puVar3 = &DAT_04101708;
          if ((char)lVar11 != '\0') {
            puVar3 = &DAT_041015f0;
          }
          lVar11 = *param_1 + 0x2a8;
          uVar12 = (ulong)(*(uint *)(puVar3 + (ulong)(uVar8 - 6) * 4) >> 10);
          lVar1 = lVar11 + uVar12 * 0x10;
          uVar7 = *(int *)(lVar11 + uVar12 * 4 + 0x410) - 1U & param_3 << 0xd;
          FUN_03653cb0(lVar11,*(uint *)(puVar3 + (ulong)(uVar8 - 6) * 4),
                       *(undefined8 *)(lVar1 + 0x18),0x2000,uVar7 & 0x7e000,
                       *(char *)(lVar1 + 0x10) == '\0');
          bVar6 = (byte)(uVar7 >> 0xd) & 0x3f;
        }
        *(byte *)((long)param_1 + uVar10 + 0x11) = bVar6;
      }
    }
    else {
      if (param_2 == 0xa000) {
        if ((param_3 & 1) == 0) {
          uVar5 = 2;
        }
        else {
          uVar5 = 3;
        }
        FUN_03657d08(*param_1,uVar5);
        return;
      }
      if (*(char *)((long)param_1 + 0x2c) == '\0') {
        lVar11 = *param_1;
        *(byte *)(lVar11 + 0x1bf8) = (byte)(param_3 >> 7) & 1;
        *(bool *)(lVar11 + 0x1bf9) = (param_3 & 0xc0) == 0x80;
      }
    }
  }
  else if (param_2 < 0xe000) {
    if (param_2 == 0xc000) {
      *(uint *)(param_1 + 4) = param_3;
    }
    else if ((*(uint *)(param_1 + 5) & 0xfffffffd) == 0) {
      *(bool *)((long)param_1 + 0x25) = *(int *)((long)param_1 + 0x1c) == 0;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x24) = 1;
    }
  }
  else if (param_2 == 0xe000) {
    **(uint **)(*param_1 + 0x1c08) = **(uint **)(*param_1 + 0x1c08) & 0xfffffffb;
    *(undefined1 *)((long)param_1 + 0x26) = 0;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x26) = 1;
  }
  return;
}

