
void FUN_0362cbcc(long param_1,uint param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  
  puVar4 = PTR_LAB_04bca5e0;
  uVar7 = (ulong)(param_2 >> 0xc & 0xf);
  uVar1 = *(ushort *)(param_1 + uVar7 * 2 + 0x1080);
  uVar5 = (ulong)uVar1 & 0xff;
  if ((int)uVar5 != 0) {
    uVar5 = uVar5 | (ulong)(uVar1 >> 8) << 0x20;
    goto LAB_0362cd34;
  }
  param_2 = param_2 & 0xffff;
  uVar5 = 3;
  switch(uVar7) {
  case 0:
    if (((param_2 - 0x200 < 0x700) && (*(char *)(param_1 + 0xec0) == '\0')) &&
       (*(long *)(param_1 + 0xf00) != 0)) {
      uVar5 = 1;
    }
    else {
      if ((0xff < param_2) || (*(char *)(param_1 + 0xec0) != '\0')) goto switchD_0362cc3c_caseD_1;
      uVar5 = 0;
    }
    break;
  case 1:
  case 2:
  case 3:
switchD_0362cc3c_caseD_1:
    uVar5 = 2;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    break;
  case 8:
  case 9:
    uVar5 = 4;
    break;
  case 10:
  case 0xb:
    uVar5 = 5;
    break;
  case 0xc:
    uVar5 = 6;
    break;
  case 0xd:
    uVar5 = 7;
    break;
  case 0xe:
    uVar5 = 8;
    break;
  default:
    if (param_2 == 0xffff) {
      *(undefined1 *)(param_1 + 0x170) = 0xd;
      *(undefined4 *)(param_1 + 0x178) = 3;
      *(undefined4 *)(param_1 + 0x172) = 0x1ffff;
      puVar4 = PTR_LAB_04bca648;
      puVar6 = PTR_LAB_04bca958;
    }
    else if (param_2 >> 7 < 0x1ff) {
      if (param_2 >> 8 < 0xff) {
        uVar5 = 0x40000000a;
        if (param_2 >> 9 < 0x7f) {
          uVar5 = 0x200000009;
        }
        goto LAB_0362cd34;
      }
      *(undefined1 *)(param_1 + 0x170) = 0xb;
      *(undefined4 *)(param_1 + 0x178) = 3;
      *(undefined4 *)(param_1 + 0x172) = 0x80ff00;
      puVar4 = PTR_LAB_04bca638;
      puVar6 = PTR_LAB_04bca948;
    }
    else {
      *(undefined1 *)(param_1 + 0x170) = 0xc;
      *(undefined4 *)(param_1 + 0x178) = 3;
      *(undefined4 *)(param_1 + 0x172) = 0x7fff80;
      puVar4 = PTR_LAB_04bca640;
      puVar6 = PTR_LAB_04bca950;
    }
    *(undefined **)(param_1 + 0x180) = puVar6;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined **)(param_1 + 400) = puVar4;
    *(undefined8 *)(param_1 + 0x198) = 0;
    return;
  }
  uVar5 = uVar5 | (ulong)(byte)PTR_DAT_04bca9e8[param_2 >> 8] << 0x20;
LAB_0362cd34:
  lVar8 = (uVar5 & 0xff) * 2;
  uVar2 = *(undefined2 *)(&DAT_04194fba + lVar8);
  uVar3 = *(undefined2 *)(&DAT_04194fd6 + lVar8);
  *(char *)(param_1 + 0x170) = (char)uVar5;
  *(int *)(param_1 + 0x178) = (int)(uVar5 >> 0x20);
  *(undefined2 *)(param_1 + 0x172) = uVar2;
  *(undefined2 *)(param_1 + 0x174) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0362cd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&DAT_04194f80)[uVar5 & 0xff] * 4 + 0x362cd90))(puVar4);
  return;
}

