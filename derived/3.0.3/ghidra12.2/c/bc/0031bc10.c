
/* WARNING: Type propagation algorithm not settling */

uint FUN_0031bc10(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = *param_1;
  lVar9 = *(long *)(lVar5 + 0x480);
  lVar7 = *(long *)(lVar5 + 0x470);
  lVar8 = *(long *)(lVar5 + 0x478);
  if ((*(long *)(*(long *)(lVar5 + 0x240) + 0x290) == 0) ||
     (pcVar6 = *(code **)(*(long *)(**(long **)(lVar5 + 0x4d0) + 0x28) + 8), pcVar6 == (code *)0x0))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = (*pcVar6)(param_1);
    uVar1 = uVar1 ^ 1;
  }
  uVar2 = 0;
  if (lVar9 != 0) {
    pcVar6 = *(code **)(lVar9 + 8);
    if (pcVar6 == (code *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*pcVar6)(param_1);
      uVar2 = uVar2 ^ 1;
    }
  }
  if ((lVar7 == 0) || (pcVar6 = *(code **)(lVar7 + 8), pcVar6 == (code *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (*pcVar6)(param_1);
  }
  if ((lVar8 == 0) || (pcVar6 = *(code **)(lVar8 + 8), pcVar6 == (code *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (*pcVar6)(param_1);
  }
  if (((uVar1 | uVar2) & 1) == 0) {
    return uVar3 & uVar4 & 1;
  }
  return 0;
}

