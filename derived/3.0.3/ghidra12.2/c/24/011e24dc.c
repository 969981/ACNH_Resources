
void FUN_011e24dc(float *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  uVar7 = uVar3 & 0xfffffffe;
  uVar4 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  uVar2 = uVar4 & 0xfffffffe;
  nn::os::LockMutex((MutexType *)&DAT_05146e40);
  iVar6 = DAT_05233980;
  iVar5 = DAT_05233970;
  if ((param_2 & 1) == 0) {
    if ((DAT_05233970 <= (int)uVar7 && (int)uVar7 <= DAT_05233980) &&
       (uVar7 = (uVar4 * 0x80 & 0xffffff00) + ((int)uVar3 >> 1),
       (DAT_05233974 <= (int)uVar2 && (int)uVar2 <= DAT_05233984) && uVar7 >> 0xf == 0)) {
      lVar1 = (ulong)(uVar7 >> 5) * 4;
      *(uint *)(&DAT_05145e18 + lVar1) =
           *(uint *)(&DAT_05145e18 + lVar1) | 1 << (ulong)(uVar3 >> 1 & 0x1f);
    }
    if (((DAT_055cdb30 != -0x17df00c3) || ((int)uVar3 < iVar5 || iVar6 < (int)uVar3)) ||
       (uVar7 = uVar3 + uVar4 * 0x200,
       ((int)uVar4 < DAT_05233974 || DAT_05233984 < (int)uVar4) || uVar7 >> 0x11 != 0))
    goto LAB_011e2704;
    lVar1 = (ulong)(uVar7 >> 5) * 4;
    uVar7 = *(uint *)(&DAT_05141e10 + lVar1) | 1 << (ulong)(uVar3 & 0x1f);
  }
  else {
    if ((DAT_05233970 <= (int)uVar7 && (int)uVar7 <= DAT_05233980) &&
       (uVar7 = (uVar4 * 0x80 & 0xffffff00) + ((int)uVar3 >> 1),
       (DAT_05233974 <= (int)uVar2 && (int)uVar2 <= DAT_05233984) && uVar7 >> 0xf == 0)) {
      lVar1 = (ulong)(uVar7 >> 5) * 4;
      *(uint *)(&DAT_05145e18 + lVar1) =
           *(uint *)(&DAT_05145e18 + lVar1) & (1 << (ulong)(uVar3 >> 1 & 0x1f) ^ 0xffffffffU);
    }
    if (((DAT_055cdb30 != -0x17df00c3) || ((int)uVar3 < iVar5 || iVar6 < (int)uVar3)) ||
       (uVar7 = uVar3 + uVar4 * 0x200,
       ((int)uVar4 < DAT_05233974 || DAT_05233984 < (int)uVar4) || uVar7 >> 0x11 != 0))
    goto LAB_011e2704;
    lVar1 = (ulong)(uVar7 >> 5) * 4;
    uVar7 = *(uint *)(&DAT_05141e10 + lVar1) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
  }
  *(uint *)(&DAT_05141e10 + lVar1) = uVar7;
LAB_011e2704:
  nn::os::UnlockMutex((MutexType *)&DAT_05146e40);
  return;
}

