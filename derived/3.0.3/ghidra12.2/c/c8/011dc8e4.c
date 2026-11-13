
void FUN_011dc8e4(long param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  undefined *local_30;
  uint local_28;
  undefined4 uStack_24;
  
  iVar6 = DAT_05233980;
  iVar5 = DAT_05233970;
  if (DAT_05146e18 == '\0') {
    uVar8 = *(uint *)(param_1 + 0xc);
    if ((((((int)uVar8 < DAT_050dfcbc) &&
          (uVar4 = *(uint *)(param_1 + 8), DAT_05233970 <= (int)uVar4)) &&
         ((int)uVar4 <= DAT_05233980)) &&
        ((DAT_05233974 <= (int)uVar8 && ((int)uVar8 <= DAT_05233984)))) &&
       (uVar8 = ((int)uVar4 >> 1) + (uVar8 >> 1) * 0x100, uVar8 >> 0xf == 0)) {
      uVar8 = uVar8 >> 5;
      (&DAT_0513edf8)[uVar8] = (&DAT_0513edf8)[uVar8] | 1 << (ulong)(uVar4 >> 1 & 0x1f);
    }
  }
  else {
    local_28 = *(uint *)(param_1 + 8);
    if (((DAT_05233970 <= (int)local_28 && (int)local_28 <= DAT_05233980) &&
        (uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8)) &&
       (((int)uVar8 <= DAT_05233984 &&
        (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050dfcc8)[uVar8] =
           (&DAT_050dfcc8)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8)) &&
       (((int)uVar8 <= DAT_05233984 &&
        (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050e0cd0)[uVar8] =
           (&DAT_050e0cd0)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8 &&
        (((int)uVar8 <= DAT_05233984 &&
         (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050e1cd8)[uVar8] =
           (&DAT_050e1cd8)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8)) &&
       (((int)uVar8 <= DAT_05233984 &&
        (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050e2ce0)[uVar8] =
           (&DAT_050e2ce0)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8 &&
        (((int)uVar8 <= DAT_05233984 &&
         (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050e3ce8)[uVar8] =
           (&DAT_050e3ce8)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8)) &&
       (((int)uVar8 <= DAT_05233984 &&
        (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050e4cf0)[uVar8] =
           (&DAT_050e4cf0)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8 &&
        (((int)uVar8 <= DAT_05233984 &&
         (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050e5cf8)[uVar8] =
           (&DAT_050e5cf8)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8)) &&
       (((int)uVar8 <= DAT_05233984 &&
        (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050e6d00)[uVar8] =
           (&DAT_050e6d00)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8 &&
        (((int)uVar8 <= DAT_05233984 &&
         (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050e7d08)[uVar8] =
           (&DAT_050e7d08)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8)) &&
       (((int)uVar8 <= DAT_05233984 &&
        (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050e8d10)[uVar8] =
           (&DAT_050e8d10)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8 &&
        (((int)uVar8 <= DAT_05233984 &&
         (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050e9d18)[uVar8] =
           (&DAT_050e9d18)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8)) &&
       (((int)uVar8 <= DAT_05233984 &&
        (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050ead20)[uVar8] =
           (&DAT_050ead20)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8 &&
        (((int)uVar8 <= DAT_05233984 &&
         (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050ebd28)[uVar8] =
           (&DAT_050ebd28)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8)) &&
       (((int)uVar8 <= DAT_05233984 &&
        (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050ecd30)[uVar8] =
           (&DAT_050ecd30)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8 &&
        (((int)uVar8 <= DAT_05233984 &&
         (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050edd38)[uVar8] =
           (&DAT_050edd38)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8)) &&
       (((int)uVar8 <= DAT_05233984 &&
        (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050eed40)[uVar8] =
           (&DAT_050eed40)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8 &&
        (((int)uVar8 <= DAT_05233984 &&
         (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050efd48)[uVar8] =
           (&DAT_050efd48)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8)) &&
       (((int)uVar8 <= DAT_05233984 &&
        (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050f0d50)[uVar8] =
           (&DAT_050f0d50)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8 &&
        (((int)uVar8 <= DAT_05233984 &&
         (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050f1d58)[uVar8] =
           (&DAT_050f1d58)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3)) &&
       ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050f2d60)[uVar8] =
           (&DAT_050f2d60)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3 &&
        ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050f6d68)[uVar8] =
           (&DAT_050f6d68)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3)) &&
       ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050fad70)[uVar8] =
           (&DAT_050fad70)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3 &&
        ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_050fed78)[uVar8] =
           (&DAT_050fed78)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3)) &&
       ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_05102d80)[uVar8] =
           (&DAT_05102d80)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3 &&
        ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_05106d88)[uVar8] =
           (&DAT_05106d88)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3)) &&
       ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_0510ad90)[uVar8] =
           (&DAT_0510ad90)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3 &&
        ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_0510ed98)[uVar8] =
           (&DAT_0510ed98)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3)) &&
       ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_05112da0)[uVar8] =
           (&DAT_05112da0)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3 &&
        ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_05116da8)[uVar8] =
           (&DAT_05116da8)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3)) &&
       ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_0511adb0)[uVar8] =
           (&DAT_0511adb0)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3 &&
        ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_0511edb8)[uVar8] =
           (&DAT_0511edb8)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3)) &&
       ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_05122dc0)[uVar8] =
           (&DAT_05122dc0)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3 &&
        ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_05126dc8)[uVar8] =
           (&DAT_05126dc8)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3)) &&
       ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_0512add0)[uVar8] =
           (&DAT_0512add0)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3 &&
        ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_0512edd8)[uVar8] =
           (&DAT_0512edd8)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3)) &&
       ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_05132de0)[uVar8] =
           (&DAT_05132de0)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3 &&
        ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_05136de8)[uVar8] =
           (&DAT_05136de8)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if ((((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
        (iVar3 = *(int *)(param_1 + 0xc), DAT_05233974 <= iVar3)) &&
       ((iVar3 <= DAT_05233984 && (uVar8 = local_28 + iVar3 * 0x200, uVar8 >> 0x11 == 0)))) {
      uVar8 = uVar8 >> 5;
      (&DAT_0513adf0)[uVar8] =
           (&DAT_0513adf0)[uVar8] & (1 << (ulong)(local_28 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    if (((iVar5 <= (int)local_28) && ((int)local_28 <= iVar6)) &&
       ((uVar8 = *(uint *)(param_1 + 0xc), DAT_05233974 <= (int)uVar8 &&
        (((int)uVar8 <= DAT_05233984 &&
         (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)local_28 >> 1), uVar8 >> 0xf == 0)))))) {
      uVar8 = uVar8 >> 5;
      (&DAT_0513fe00)[uVar8] =
           (&DAT_0513fe00)[uVar8] & (1 << (ulong)(local_28 >> 1 & 0x1f) ^ 0xffffffffU);
      local_28 = *(uint *)(param_1 + 8);
    }
    uStack_24 = *(undefined4 *)(param_1 + 0xc);
    local_30 = PTR_DAT_04bb2010 + 0x10;
    uVar7 = FUN_011dec54(&local_30);
    uVar8 = *(uint *)(param_1 + 8);
    bVar1 = (int)uVar8 < DAT_05233970 || DAT_05233980 < (int)uVar8;
    if ((uVar7 & 1) == 0) {
      if (bVar1) {
        return;
      }
      uVar4 = *(uint *)(param_1 + 0xc);
      if ((int)uVar4 < DAT_05233974) {
        return;
      }
      if (DAT_05233984 < (int)uVar4) {
        return;
      }
      uVar4 = (uVar4 & 0x1fffffe) * 0x80 + ((int)uVar8 >> 1);
      if (uVar4 >> 0xf != 0) {
        return;
      }
      lVar2 = (ulong)(uVar4 >> 5) * 4;
      uVar8 = *(uint *)(&DAT_05140e08 + lVar2) & (1 << (ulong)(uVar8 >> 1 & 0x1f) ^ 0xffffffffU);
    }
    else {
      if (bVar1) {
        return;
      }
      uVar4 = *(uint *)(param_1 + 0xc);
      if ((int)uVar4 < DAT_05233974) {
        return;
      }
      if (DAT_05233984 < (int)uVar4) {
        return;
      }
      uVar4 = (uVar4 & 0x1fffffe) * 0x80 + ((int)uVar8 >> 1);
      if (uVar4 >> 0xf != 0) {
        return;
      }
      lVar2 = (ulong)(uVar4 >> 5) * 4;
      uVar8 = *(uint *)(&DAT_05140e08 + lVar2) | 1 << (ulong)(uVar8 >> 1 & 0x1f);
    }
    *(uint *)(&DAT_05140e08 + lVar2) = uVar8;
  }
  return;
}

