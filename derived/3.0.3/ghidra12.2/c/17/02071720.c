
void FUN_02071720(int *param_1,int param_2,int *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  
  if (0x68 < *param_3) {
    iVar7 = 0;
    goto LAB_02071814;
  }
  iVar7 = *param_3;
  *param_1 = 0;
  uVar6 = param_4 ^ 1;
  if (param_2 == 3) {
    lVar3 = (long)iVar7 * 0x30;
    piVar10 = (int *)(&DAT_053d2ed8 + (long)iVar7 * 6);
    uVar6 = (&DAT_053d2f03)[lVar3] != '\0' & uVar6;
    uVar11 = (uint)(char)(&DAT_053d2f00)[lVar3];
    uVar2 = uVar11 + uVar6 & 0xff;
    cVar5 = (char)(uVar11 + uVar6);
    iVar8 = 0;
    if (uVar2 != 0) {
      if (uVar2 != 1) goto LAB_020717b8;
LAB_02071854:
      if (uVar6 == 0) {
        param_3 = piVar10;
      }
LAB_0207185c:
      iVar8 = *param_3;
    }
LAB_020718a4:
    *param_1 = iVar8;
  }
  else {
    if (param_2 == 2) {
      lVar3 = (long)iVar7 * 0x30;
      uVar6 = (&DAT_053d2f04)[lVar3] != '\0' & uVar6;
      uVar11 = (uint)(char)(&DAT_053d2f01)[lVar3];
      uVar2 = uVar11 + uVar6 & 0xff;
      cVar5 = (char)(uVar11 + uVar6);
      iVar8 = 0;
      if (uVar2 != 0) {
        piVar10 = (int *)((long)&DAT_053d2ee0 + lVar3 + 4);
joined_r0x0207189c:
        if (uVar2 == 1) goto LAB_02071854;
LAB_020717b8:
        puVar4 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar6 = *puVar4 ^ *puVar4 << 0xb;
        uVar2 = puVar4[3];
        *puVar4 = puVar4[1];
        puVar4[1] = puVar4[2];
        uVar6 = uVar6 >> 8 ^ uVar2 >> 0x13 ^ uVar6 ^ uVar2;
        puVar4[2] = uVar2;
        puVar4[3] = uVar6;
        uVar9 = ((long)cVar5 & 0xffffffffU) * (ulong)uVar6;
        uVar6 = (uint)(uVar9 >> 0x20);
        if ((uVar6 != uVar11) && (param_3 = piVar10 + (uVar9 >> 0x20), 2 < uVar6)) {
          param_3 = piVar10;
        }
        goto LAB_0207185c;
      }
      goto LAB_020718a4;
    }
    if (param_2 == 1) {
      lVar3 = (long)iVar7 * 0x30;
      uVar11 = (uint)(char)(&DAT_053d2f02)[lVar3];
      uVar6 = (&DAT_053d2f05)[lVar3] != '\0' & uVar6;
      uVar1 = (int)(char)(&DAT_053d2f02)[lVar3] + uVar6;
      uVar2 = uVar1 & 0xff;
      cVar5 = (char)uVar1;
      iVar8 = 0;
      if (uVar2 != 0) {
        piVar10 = (int *)(&DAT_053d2ef0 + (long)iVar7 * 6);
        goto joined_r0x0207189c;
      }
      goto LAB_020718a4;
    }
  }
  if ((param_4 & 1) == 0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  if (0x68 < *param_1) {
    return;
  }
  iVar7 = *(int *)((long)&DAT_053d2ef8 + (long)*param_1 * 0x30 + 4);
LAB_02071814:
  *param_1 = iVar7;
  return;
}

