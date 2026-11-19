
void FUN_0390e4c0(long param_1,int param_2,long param_3,undefined1 param_4)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  
  if (param_2 != -1) {
    plVar1 = (long *)(param_1 + 8 + (long)param_2 * 0x10);
    lVar2 = param_1 + 8 + (long)param_2 * 0x10;
    lVar8 = *plVar1;
    if (lVar8 != 0) {
      *plVar1 = 0;
      *(undefined1 *)(lVar2 + 8) = 1;
      if (((((lVar8 != *(long *)(param_1 + 8)) && (lVar8 != *(long *)(param_1 + 0x18))) &&
           (lVar8 != *(long *)(param_1 + 0x28))) &&
          (((lVar8 != *(long *)(param_1 + 0x38) && (lVar8 != *(long *)(param_1 + 0x48))) &&
           ((lVar8 != *(long *)(param_1 + 0x58) &&
            ((lVar8 != *(long *)(param_1 + 0x68) && (lVar8 != *(long *)(param_1 + 0x78))))))))) &&
         ((lVar8 != *(long *)(param_1 + 0x88) &&
          (((((lVar8 != *(long *)(param_1 + 0x98) && (lVar8 != *(long *)(param_1 + 0xa8))) &&
             (lVar8 != *(long *)(param_1 + 0xb8))) &&
            ((lVar8 != *(long *)(param_1 + 200) && (lVar8 != *(long *)(param_1 + 0xd8))))) &&
           ((lVar8 != *(long *)(param_1 + 0xe8) && (lVar8 != *(long *)(param_1 + 0xf8))))))))) {
        iVar5 = (int)*(char *)(lVar2 + 9);
        if (*(uint *)(param_1 + 0x108) <= (uint)(int)*(char *)(lVar2 + 9)) {
          iVar5 = 0;
        }
        *(undefined8 *)(*(long *)(param_1 + 0x110) + (long)iVar5 * 8) = 0;
      }
      *(undefined1 *)(lVar2 + 9) = 0xff;
    }
    if (param_3 != 0) {
      *plVar1 = param_3;
      uVar4 = *(uint *)(param_1 + 0x108);
      *(undefined1 *)(lVar2 + 8) = param_4;
      if ((int)uVar4 < 1) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar9 = uVar4 + 1;
        uVar6 = 0xffffffff;
        do {
          uVar7 = uVar9 - 2;
          uVar3 = uVar7;
          if (uVar4 <= uVar7) {
            uVar3 = 0;
          }
          lVar8 = *(long *)(*(long *)(param_1 + 0x110) + (ulong)uVar3 * 8);
          if (lVar8 == param_3) goto LAB_0390e638;
          uVar9 = uVar9 - 1;
          if (lVar8 != 0) {
            uVar7 = uVar6;
          }
          uVar6 = uVar7;
        } while (1 < uVar9);
      }
      uVar9 = uVar7;
      if (uVar4 <= uVar7) {
        uVar9 = 0;
      }
      *(long *)(*(long *)(param_1 + 0x110) + (long)(int)uVar9 * 8) = param_3;
LAB_0390e638:
      *(char *)(lVar2 + 9) = (char)uVar7;
    }
  }
  return;
}

