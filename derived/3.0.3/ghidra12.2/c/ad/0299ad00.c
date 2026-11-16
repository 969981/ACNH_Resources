
bool FUN_0299ad00(long param_1,undefined1 *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  
  iVar2 = *(int *)(param_2 + 0x14);
  iVar3 = *(int *)(param_3 + 0xc);
  if (iVar2 != iVar3) {
    *(int *)(param_2 + 0x14) = iVar3;
    *param_2 = 1;
    param_2[10] = (char)iVar3;
    if (DAT_04c487d4 != -1) {
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) goto LAB_0299ae50;
    }
    iVar4 = *(int *)(param_2 + 0x10);
    if (-1 < iVar4) {
      iVar5 = *(int *)(param_1 + 0x188);
      uVar6 = iVar4 - iVar5;
      if (iVar4 < iVar5) {
        lVar9 = *(long *)(param_1 + 0x160);
        cVar8 = '\x01';
        if (*(int *)(param_2 + 0x18) == 4) {
          cVar8 = '\x02';
        }
        if (lVar9 != param_1 + 0x158) {
          do {
            lVar10 = *(long *)(lVar9 + -8);
            if ((*(char *)(lVar10 + 8) == cVar8) &&
               (*(int *)(lVar10 + 0xc) == *(int *)(param_2 + 0xc))) goto LAB_0299ae38;
            lVar9 = *(long *)(lVar9 + 8);
          } while (lVar9 + -8 != param_1 + 0x150);
        }
      }
      else {
        iVar5 = *(uint *)(param_1 + 0x198) + iVar5;
        uVar7 = iVar4 - iVar5;
        if (iVar4 < iVar5) {
          if (*(uint *)(param_1 + 0x198) <= uVar6) {
            uVar6 = 0;
          }
          lVar10 = *(long *)(param_1 + 0x1a0);
        }
        else {
          if ((int)(iVar5 + *(uint *)(param_1 + 0x1a8)) <= iVar4) goto LAB_0299ae50;
          if (*(uint *)(param_1 + 0x1a8) <= uVar7) {
            uVar7 = 0;
          }
          lVar10 = *(long *)(param_1 + 0x1b0);
          uVar6 = uVar7;
        }
        if (lVar10 != 0) {
          lVar10 = lVar10 + (long)(int)uVar6 * 0x50;
LAB_0299ae38:
          lVar10 = *(long *)(lVar10 + 0x18);
          *(int *)(lVar10 + 0x134) = iVar3;
          *(byte *)(lVar10 + 0x130) = *(byte *)(lVar10 + 0x130) | 1;
        }
      }
    }
  }
LAB_0299ae50:
  return iVar2 != iVar3;
}

