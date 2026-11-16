
ulong FUN_027e8fb0(long param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint local_f8 [37];
  uint3 local_64;
  
  lVar9 = 0;
  uVar10 = 0;
  local_f8[0x24] = 0;
  local_f8[0x20] = 0;
  local_f8[0x21] = 0;
  local_f8[0x22] = 0;
  local_f8[0x23] = 0;
  local_f8[2] = 0;
  local_f8[3] = 0;
  local_f8[0x1c] = 0;
  local_f8[0x1d] = 0;
  local_f8[0x1e] = 0;
  local_f8[0x1f] = 0;
  local_f8[0x18] = 0;
  local_f8[0x19] = 0;
  local_f8[0x1a] = 0;
  local_f8[0x1b] = 0;
  local_f8[0x14] = 0;
  local_f8[0x15] = 0;
  local_f8[0x16] = 0;
  local_f8[0x17] = 0;
  local_f8[0x10] = 0;
  local_f8[0x11] = 0;
  local_f8[0x12] = 0;
  local_f8[0x13] = 0;
  local_f8[0xc] = 0;
  local_f8[0xd] = 0;
  local_f8[0xe] = 0;
  local_f8[0xf] = 0;
  local_f8[8] = 0;
  local_f8[9] = 0;
  local_f8[10] = 0;
  local_f8[0xb] = 0;
  local_f8[4] = 0;
  local_f8[5] = 0;
  local_f8[6] = 0;
  local_f8[7] = 0;
  do {
    puVar1 = (undefined4 *)((long)local_f8 + ((long)((ulong)uVar10 << 0x20) >> 0x1e) + 8);
    if ((undefined4 *)((long)param_2 + lVar9) != puVar1) {
      *puVar1 = *(undefined4 *)((long)param_2 + lVar9);
    }
    lVar9 = lVar9 + 4;
    uVar10 = uVar10 + 1;
  } while (lVar9 != 0x8c);
  lVar9 = 0;
  do {
    uVar5 = *(uint *)(param_1 + 0xbf5e0 + lVar9 * 4);
    uVar10 = 0;
    do {
      uVar6 = 1 << (ulong)(uVar10 & 0x1f);
      if ((uVar6 & uVar5) != 0) {
        local_f8[lVar9 + 2] = local_f8[lVar9 + 2] & (uVar6 ^ 0xffffffff);
      }
      uVar6 = 1 << (ulong)(uVar10 + 1 & 0x1f);
      if ((uVar6 & uVar5) != 0) {
        local_f8[lVar9 + 2] = local_f8[lVar9 + 2] & (uVar6 ^ 0xffffffff);
      }
      uVar10 = uVar10 + 2;
    } while (uVar10 != 0x20);
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x23);
  uVar10 = local_f8[2] - (local_f8[2] >> 1 & 0x55555555);
  uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
  uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
  uVar10 = uVar10 + (uVar10 >> 8);
  if (((((((((uVar10 + (uVar10 >> 0x10) & 0x3f) == 0) &&
           (uVar10 = local_f8[3] - (local_f8[3] >> 1 & 0x55555555),
           uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
           uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
           (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)) &&
          (uVar10 = local_f8[4] - (local_f8[4] >> 1 & 0x55555555),
          uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
          uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
          (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)) &&
         ((uVar10 = local_f8[5] - (local_f8[5] >> 1 & 0x55555555),
          uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
          uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
          (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0 &&
          (uVar10 = local_f8[6] - (local_f8[6] >> 1 & 0x55555555),
          uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
          uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
          (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)))) &&
        ((uVar10 = local_f8[7] - (local_f8[7] >> 1 & 0x55555555),
         uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
         uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
         (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0 &&
         ((uVar10 = local_f8[8] - (local_f8[8] >> 1 & 0x55555555),
          uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
          uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
          (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0 &&
          (uVar10 = local_f8[9] - (local_f8[9] >> 1 & 0x55555555),
          uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
          uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
          (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)))))) &&
       (((uVar10 = local_f8[10] - (local_f8[10] >> 1 & 0x55555555),
         uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
         uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
         (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0 &&
         ((((uVar10 = local_f8[0xb] - (local_f8[0xb] >> 1 & 0x55555555),
            uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
            uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
            (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0 &&
            (uVar10 = local_f8[0xc] - (local_f8[0xc] >> 1 & 0x55555555),
            uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
            uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
            (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)) &&
           (uVar10 = local_f8[0xd] - (local_f8[0xd] >> 1 & 0x55555555),
           uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
           uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
           (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)) &&
          (((uVar10 = local_f8[0xe] - (local_f8[0xe] >> 1 & 0x55555555),
            uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
            uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
            (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0 &&
            (uVar10 = local_f8[0xf] - (local_f8[0xf] >> 1 & 0x55555555),
            uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
            uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
            (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)) &&
           ((uVar10 = local_f8[0x10] - (local_f8[0x10] >> 1 & 0x55555555),
            uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
            uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
            (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0 &&
            ((uVar10 = local_f8[0x11] - (local_f8[0x11] >> 1 & 0x55555555),
             uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
             uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
             (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0 &&
             (uVar10 = local_f8[0x12] - (local_f8[0x12] >> 1 & 0x55555555),
             uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
             uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
             (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)))))))))) &&
        (uVar10 = local_f8[0x13] - (local_f8[0x13] >> 1 & 0x55555555),
        uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
        uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
        (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)))) &&
      ((((uVar10 = local_f8[0x14] - (local_f8[0x14] >> 1 & 0x55555555),
         uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
         uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
         (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0 &&
         (uVar10 = local_f8[0x15] - (local_f8[0x15] >> 1 & 0x55555555),
         uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
         uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
         (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)) &&
        (uVar10 = local_f8[0x16] - (local_f8[0x16] >> 1 & 0x55555555),
        uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
        uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
        (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)) &&
       (((uVar10 = local_f8[0x17] - (local_f8[0x17] >> 1 & 0x55555555),
         uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
         uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
         (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0 &&
         (uVar10 = local_f8[0x18] - (local_f8[0x18] >> 1 & 0x55555555),
         uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
         uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
         (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)) &&
        ((((uVar10 = local_f8[0x19] - (local_f8[0x19] >> 1 & 0x55555555),
           uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
           uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
           (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0 &&
           ((uVar10 = local_f8[0x1a] - (local_f8[0x1a] >> 1 & 0x55555555),
            uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
            uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
            (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0 &&
            (uVar10 = local_f8[0x1b] - (local_f8[0x1b] >> 1 & 0x55555555),
            uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
            uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
            (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)))) &&
          (uVar10 = local_f8[0x1c] - (local_f8[0x1c] >> 1 & 0x55555555),
          uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
          uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
          (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)) &&
         ((((uVar10 = local_f8[0x1d] - (local_f8[0x1d] >> 1 & 0x55555555),
            uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
            uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
            (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0 &&
            (uVar10 = local_f8[0x1e] - (local_f8[0x1e] >> 1 & 0x55555555),
            uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
            uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
            (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)) &&
           (uVar10 = local_f8[0x1f] - (local_f8[0x1f] >> 1 & 0x55555555),
           uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
           uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
           (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)) &&
          ((uVar10 = local_f8[0x20] - (local_f8[0x20] >> 1 & 0x55555555),
           uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
           uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
           (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0 &&
           (uVar10 = local_f8[0x21] - (local_f8[0x21] >> 1 & 0x55555555),
           uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
           uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
           (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)))))))))))) &&
     (uVar10 = local_f8[0x22] - (local_f8[0x22] >> 1 & 0x55555555),
     uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
     uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
     (uVar10 + (uVar10 >> 0x10) & 0x3f) == 0)) {
    uVar10 = local_f8[0x23] - (local_f8[0x23] >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    puVar13 = local_f8 + 2;
    if (((uVar10 + (uVar10 >> 0x10) & 0x3f) == 0) &&
       (uVar10 = local_f8[0x24] - (local_f8[0x24] >> 1 & 0x55555555),
       uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
       uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
       puVar13 = param_2, (uVar10 + (uVar10 >> 0x10) & 0x3f) != 0)) {
      puVar13 = local_f8 + 2;
    }
  }
  else {
    puVar13 = local_f8 + 2;
  }
  uVar10 = 0;
  uVar11 = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  do {
    uVar5 = *(uint *)((long)puVar13 + (-(uVar11 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2));
    uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    if ((uVar5 + (uVar5 >> 0x10) & 0x3f) != 0) {
      local_f8[uVar10 >> 5] = local_f8[uVar10 >> 5] | 1 << (ulong)(uVar10 & 0x1f);
    }
    uVar10 = uVar10 + 1;
    uVar11 = (ulong)((int)uVar11 + 1);
  } while (uVar10 != 0x23);
  uVar8 = local_f8[0];
  uVar14 = local_f8[1];
  uVar10 = local_f8[0] - (local_f8[0] >> 1 & 0x55555555);
  uVar5 = local_f8[1] - (local_f8[1] >> 1 & 0x55555555);
  uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
  uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
  uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
  uVar10 = uVar10 + (uVar10 >> 8);
  uVar5 = uVar5 + (uVar5 >> 8);
  uVar6 = uVar10 + (uVar10 >> 0x10) & 0x3f;
  uVar10 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar6;
  if (DAT_05594b4c == '\x01') {
    uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar5;
  }
  else {
    uVar5 = nn::os::GetSystemTick();
    uVar4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
    uVar5 = uVar4 ^ uVar4 * 0x800;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
  }
  uVar5 = (uint)((ulong)uVar5 * (ulong)uVar10 >> 0x20);
  if (uVar5 < uVar6) {
    iVar7 = 0;
    uVar6 = 0;
    uVar14 = uVar8;
    iVar12 = iVar7;
    if (uVar8 == 0) goto LAB_027e98d0;
LAB_027e9894:
    iVar12 = (uVar5 - uVar6) + 2;
    uVar10 = 0xffffffff;
    do {
      iVar12 = iVar12 + -1;
      if (iVar12 < 2) {
        uVar10 = uVar14 - 1 & (uVar14 ^ 0xffffffff);
        uVar10 = uVar10 - (uVar10 >> 1 & 0x55555555);
        uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
        uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
        uVar10 = uVar10 + (uVar10 >> 8);
        uVar10 = uVar10 + (uVar10 >> 0x10) & 0x3f;
        break;
      }
      uVar14 = uVar14 - 1 & uVar14;
    } while (uVar14 != 0);
  }
  else {
    if (uVar10 <= uVar5) {
      uVar10 = 0xffffffff;
      goto LAB_027e9914;
    }
    iVar7 = 0x20;
    iVar12 = 0x20;
    if (uVar14 != 0) goto LAB_027e9894;
LAB_027e98d0:
    iVar7 = iVar12;
    uVar10 = 0xffffffff;
  }
  uVar10 = uVar10 + iVar7;
LAB_027e9914:
  puVar2 = puVar13 + uVar10;
  if (0x22 < uVar10) {
    puVar2 = puVar13;
  }
  puVar3 = puVar13 + uVar10;
  if (0x22 < uVar10) {
    puVar3 = puVar13;
  }
  uVar5 = *puVar3;
  if (DAT_05594b4c == '\x01') {
    uVar6 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar6 = uVar6 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar6 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar6;
  }
  else {
    uVar6 = nn::os::GetSystemTick();
    uVar14 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
    uVar6 = uVar14 ^ uVar14 * 0x800;
    uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 2;
    uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
    uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
    uVar6 = uVar6 >> 8 ^ uVar14 >> 0x13 ^ uVar6 ^ uVar14;
  }
  uVar8 = *puVar2;
  uVar14 = 0xffffffff;
  if ((uVar8 != 0) &&
     (uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555),
     uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333),
     uVar4 = uVar8 - (uVar8 >> 1 & 0x55555555), uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f,
     uVar5 = uVar5 + (uVar5 >> 8), uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
     uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f, uVar4 = uVar4 + (uVar4 >> 8),
     uVar5 = (uint)((ulong)uVar6 * (ulong)(uVar5 + (uVar5 >> 0x10) & 0x3f) >> 0x20),
     uVar5 < (uVar4 + (uVar4 >> 0x10) & 0x3f))) {
    iVar12 = uVar5 + 2;
    do {
      iVar12 = iVar12 + -1;
      if (iVar12 < 2) {
        uVar5 = uVar8 - 1 & (uVar8 ^ 0xffffffff);
        uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
        uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
        uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
        uVar5 = uVar5 + (uVar5 >> 8);
        uVar14 = uVar5 + (uVar5 >> 0x10) & 0x3f;
        break;
      }
      uVar8 = uVar8 - 1 & uVar8;
    } while (uVar8 != 0);
  }
  local_64 = 0x80023;
  FUN_020fd218(&local_64,uVar10,uVar14);
  return (ulong)local_64;
}

