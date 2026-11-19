
void FUN_038f8f90(ushort *param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int local_44;
  
  puVar6 = PTR_DAT_04bbd7c0;
  (*DAT_04c62118)(param_2,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30));
  (**(code **)PTR_DAT_04bcf070)(param_2);
  uVar3 = param_1[3];
  (**(code **)PTR_DAT_04bcf098)(param_2,param_1[5]);
  (**(code **)PTR_DAT_04bcf078)(param_2,*param_1);
  (**(code **)PTR_DAT_04bcf080)(param_2,param_1[1]);
  (**(code **)PTR_DAT_04bcf088)(param_2,param_1[2]);
  (**(code **)PTR_DAT_04bcf720)(param_2,*(undefined1 *)((long)param_1 + 9));
  (**(code **)PTR_DAT_04bcf090)(param_2,uVar3);
  (**(code **)PTR_DAT_04bcf730)
            (param_2,(char)param_1[0xd],*(undefined1 *)((long)param_1 + 0x1b),(char)param_1[0xe],
             *(undefined1 *)((long)param_1 + 0x1d));
  (**(code **)PTR_DAT_04bcf728)(param_2,(char)param_1[4]);
  (**(code **)PTR_DAT_04bcf738)(param_2,0);
  bVar2 = (byte)param_1[0xf];
  if ((bVar2 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    for (uVar8 = 0; (&DAT_041b3598)[uVar8] != (uint)param_1[3]; uVar8 = uVar8 + 2) {
      if (uVar8 == 0x5c) {
        uVar8 = 0;
        goto LAB_038f912c;
      }
      if ((&DAT_041b359c)[uVar8] == (uint)param_1[3]) {
        uVar8 = uVar8 + 1;
        break;
      }
    }
    uVar8 = uVar8 & 0xffffffff;
LAB_038f912c:
    uVar4 = *param_1;
    bVar2 = (&DAT_041b2e5c)[uVar8 * 0x14];
    (*DAT_04c61cd8)(*(undefined8 *)(*(long *)puVar6 + 0x30),0x39,&local_44);
    (*DAT_04c621c0)(param_2,(long)(int)((local_44 + (uint)bVar2 * (uint)uVar4) - 1 & -local_44));
    bVar2 = (byte)param_1[0xf];
    uVar7 = 0x40;
  }
  uVar5 = uVar3 - 0x32;
  uVar1 = bVar2 >> 2 & 2 | ((bVar2 & 4) >> 2) << 9;
  if (((uVar5 < 5) || (uVar9 = uVar1, (bVar2 >> 1 & 1) != 0)) && (uVar9 = uVar1 | 8, uVar5 < 5)) {
    if ((*(byte *)(*(long *)PTR_DAT_04bc1010 + 0x641) & 4) != 0) {
      uVar9 = uVar1 | 0x88;
    }
  }
  (*DAT_04c62128)(param_2,uVar9 | uVar7);
  return;
}

