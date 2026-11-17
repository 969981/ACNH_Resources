
/* WARNING: Removing unreachable block (ram,0x030400f4) */

void FUN_030400b8(long param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x210) + 0x7f8);
  if (lVar3 != 0) {
    bVar1 = 0 < param_2;
    lVar5 = *(long *)(lVar3 + 0x218);
    if (lVar5 == 0) {
LAB_03040130:
      if (bVar1) goto LAB_03040168;
LAB_03040160:
      uVar4 = 1;
    }
    else {
      if (*(char *)(lVar5 + 0x20) == '\0') {
        if (bVar1 == (*(int *)(lVar5 + 0x28) == 0)) goto LAB_03040168;
        if (bVar1) goto LAB_03040158;
        goto LAB_03040160;
      }
      piVar2 = (int *)(lVar5 + 0x24);
      if (*(char *)(lVar5 + 0x21) != '\0') {
        piVar2 = (int *)(lVar5 + 0x28);
      }
      if (*piVar2 == 0) goto LAB_03040130;
      if (!bVar1) goto LAB_03040168;
LAB_03040158:
      uVar4 = 2;
    }
    *(undefined1 *)(lVar3 + 0x220) = uVar4;
  }
LAB_03040168:
  lVar3 = *(long *)(*(long *)(param_1 + 0x210) + 0x800);
  if (lVar3 == 0) goto LAB_03040214;
  bVar1 = param_2 < param_3 + -1;
  lVar5 = *(long *)(lVar3 + 0x218);
  if (lVar5 == 0) {
LAB_030401dc:
    if (bVar1) goto LAB_03040214;
LAB_0304020c:
    uVar4 = 1;
  }
  else {
    if (*(char *)(lVar5 + 0x20) == '\0') {
      if (bVar1 == (*(int *)(lVar5 + 0x28) == 0)) goto LAB_03040214;
      if (bVar1) goto LAB_03040204;
      goto LAB_0304020c;
    }
    piVar2 = (int *)(lVar5 + 0x24);
    if (*(char *)(lVar5 + 0x21) != '\0') {
      piVar2 = (int *)(lVar5 + 0x28);
    }
    if (*piVar2 == 0) goto LAB_030401dc;
    if (!bVar1) goto LAB_03040214;
LAB_03040204:
    uVar4 = 2;
  }
  *(undefined1 *)(lVar3 + 0x220) = uVar4;
LAB_03040214:
  FUN_03045c00(*(undefined8 *)(param_1 + 0x210),param_2 + 1);
  return;
}

