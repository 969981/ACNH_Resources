
void FUN_038fe730(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_1;
  uVar1 = (ulong)*(byte *)(lVar8 + 0x9d);
  if (uVar1 != 0) {
    iVar7 = 0;
    lVar9 = 0;
    do {
      lVar5 = *(long *)(*(long *)(lVar8 + 0x28) + lVar9);
      if (lVar5 == 0) {
        lVar2 = param_1[0xb];
LAB_038fe7d4:
        lVar5 = *(long *)(param_1[10] + lVar9);
        *(undefined8 *)(param_1[10] + lVar9) = 0;
        *(undefined8 *)(param_1[0xb] + lVar9) = 0xffffffffffffffff;
        pcVar4 = (code *)param_1[0xf];
        if (pcVar4 != (code *)0x0) {
          if (lVar5 == 0) {
LAB_038fe7f4:
            if (*(long *)(lVar2 + lVar9) == *(long *)(param_1[0xb] + lVar9)) goto LAB_038fe77c;
          }
LAB_038fe770:
          (*pcVar4)(param_1,iVar7);
        }
      }
      else {
        lVar2 = param_1[0xb];
        if (*(long *)(lVar5 + 0x40) == 0) goto LAB_038fe7d4;
        uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0x40) + 0x90);
        lVar6 = *(long *)(param_1[10] + lVar9);
        *(long *)(param_1[10] + lVar9) = lVar5;
        *(undefined8 *)(param_1[0xb] + lVar9) = uVar3;
        pcVar4 = (code *)param_1[0xf];
        if (pcVar4 != (code *)0x0) {
          if (lVar6 == lVar5) goto LAB_038fe7f4;
          goto LAB_038fe770;
        }
      }
LAB_038fe77c:
      lVar9 = lVar9 + 8;
      iVar7 = iVar7 + 1;
    } while (uVar1 * 8 != lVar9);
  }
  return;
}

