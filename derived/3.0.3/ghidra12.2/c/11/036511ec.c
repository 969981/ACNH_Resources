
void FUN_036511ec(long *param_1,uint param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  
  uVar7 = param_2 & 0xfffff800;
  bVar2 = (byte)param_3;
  if (uVar7 == 0xe000) {
    iVar4 = 0x8000;
    *(byte *)(param_1 + 4) = bVar2 & 0x3f;
    lVar8 = *param_1;
    cVar1 = *(char *)(lVar8 + 0x4b8);
    uVar5 = *(undefined8 *)(lVar8 + 0x4c0);
    iVar9 = *(int *)(lVar8 + 0x738);
  }
  else {
    if (uVar7 == 0xe800) {
      *(byte *)((long)param_1 + 0x21) = bVar2 & 0x3f;
      lVar8 = *param_1;
      FUN_03653cb0(lVar8 + 0x2a8,0xa000,*(undefined8 *)(lVar8 + 0x540),0x2000,
                   *(int *)(lVar8 + 0x758) - 1U & param_3 << 0xd & 0x7e000,
                   *(char *)(lVar8 + 0x538) == '\0');
      *(byte *)((long)param_1 + 0xc) = (byte)(param_3 >> 6) & 1;
      *(byte *)((long)param_1 + 0xd) = (byte)(param_3 >> 7) & 1;
      return;
    }
    if (uVar7 != 0xf000) {
      param_2 = param_2 - 0x8000;
      if (2 < param_2 >> 0xd) {
        if (uVar7 == 0xf800) {
          *(byte *)((long)param_1 + 0xe) = bVar2 & 1;
          *(byte *)((long)param_1 + 0xf) = (byte)(param_3 >> 1) & 1;
          *(byte *)(param_1 + 2) = (byte)(param_3 >> 2) & 1;
          *(byte *)((long)param_1 + 0x11) = (byte)(param_3 >> 3) & 1;
          if ((param_3 & 0xfffffff0) == 0x40) {
            return;
          }
          *(undefined4 *)((long)param_1 + 0xe) = 0x1010101;
          return;
        }
        if (uVar7 == 0x5800) {
          **(uint **)(*param_1 + 0x1c08) = **(uint **)(*param_1 + 0x1c08) & 0xfffffeff;
          *(byte *)((long)param_1 + 0xb) = bVar2 & 0x7f;
          *(byte *)(param_1 + 1) = (byte)(param_3 >> 7) & 1;
          return;
        }
        if (uVar7 == 0x5000) {
          **(uint **)(*param_1 + 0x1c08) = **(uint **)(*param_1 + 0x1c08) & 0xfffffeff;
          *(ushort *)((long)param_1 + 10) =
               *(ushort *)((long)param_1 + 10) & 0x7f00 | (ushort)param_3 & 0xff;
          return;
        }
        return;
      }
      lVar11 = *param_1;
      uVar10 = (ulong)(param_2 >> 0xb);
      iVar4 = (param_2 >> 0xb) << 10;
      *(byte *)((long)param_1 + uVar10 + 0x23) = bVar2;
      lVar8 = lVar11 + 0x2a8;
      if ((param_2 < 0x4000) || ((param_3 & 0xff) < 0xe0)) {
        lVar11 = lVar8 + uVar10 * 0x10;
        uVar6 = 0x400;
        uVar5 = *(undefined8 *)(lVar11 + 0x18);
        bVar3 = *(char *)(lVar11 + 0x10) == '\0';
        uVar7 = param_3 << 10 & *(int *)(lVar8 + uVar10 * 4 + 0x410) - 1U & 0x3fc00;
      }
      else {
        uVar6 = 0x400;
        bVar3 = *(char *)(lVar11 + 0x338) == '\0';
        uVar5 = *(undefined8 *)(lVar11 + 0x340);
        uVar7 = param_3 << 10 & *(int *)(lVar11 + 0x6d8) - 1U & 0x400;
      }
      goto LAB_03651280;
    }
    iVar4 = 0xc000;
    *(byte *)((long)param_1 + 0x22) = bVar2 & 0x3f;
    lVar8 = *param_1;
    cVar1 = *(char *)(lVar8 + 0x5b8);
    uVar5 = *(undefined8 *)(lVar8 + 0x5c0);
    iVar9 = *(int *)(lVar8 + 0x778);
  }
  lVar8 = lVar8 + 0x2a8;
  bVar3 = cVar1 == '\0';
  uVar7 = iVar9 - 1U & param_3 << 0xd & 0x7e000;
  uVar6 = 0x2000;
LAB_03651280:
  FUN_03653cb0(lVar8,iVar4,uVar5,uVar6,uVar7,bVar3);
  return;
}

