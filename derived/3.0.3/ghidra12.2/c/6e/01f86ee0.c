
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f86ee0(long param_1)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long lVar11;
  short *psVar12;
  float fVar13;
  float fVar14;
  byte local_34 [4];
  
  FUN_01edf290();
  if ((*(byte *)(param_1 + 0xad58) >> 4 & 1) != 0) {
    return;
  }
  pcVar1 = (char *)(param_1 + 0xb148);
  if (DAT_04cd19d8 == 0) {
    pbVar10 = &DAT_0548e140;
LAB_01f86f70:
    if (7 < *pbVar10) {
LAB_01f86f7c:
      if (DAT_0537d558 != (long *)0x0) {
        lVar11 = *DAT_0537d558;
        bVar3 = *(byte *)(lVar11 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar2 = (uint *)(lVar11 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar10 = (byte *)(lVar11 + 0x471);
          }
        }
        local_34[0] = *pbVar10;
        if (local_34[0] < 8) goto LAB_01f86ffc;
      }
      pbVar10 = &DAT_0548e168;
    }
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01f86f70;
      }
      goto LAB_01f86f7c;
    }
  }
  local_34[0] = *pbVar10;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
LAB_01f86ffc:
  uVar6 = FUN_0255b714(local_34,1);
  if ((uVar6 & 1) == 0) {
    if ((DAT_054f5738 == 0) || (uVar8 = (ulong)local_34[0], 7 < uVar8)) {
      if ((DAT_054f0c70 & 1) == 0) {
        uVar6 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar12 = &DAT_054f0c08;
        if ((int)uVar6 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = 0;
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
          _DAT_054f0c44 = 0;
          DAT_054f0c34._0_4_ = 0;
          DAT_054f0c34._4_4_ = 0;
          DAT_054f0c3c._0_4_ = 0;
          DAT_054f0c3c._4_4_ = 0;
          _DAT_054f0c08 = 0;
          _DAT_054f0c10 = 1;
          DAT_054f0c14._0_4_ = 0;
          DAT_054f0c14._4_4_ = 0;
          DAT_054f0c48 = 0;
          DAT_054f0c50 = 0;
          DAT_054f0c58 = 0;
          DAT_054f0c60 = 0;
          uVar6 = __cxa_guard_release(&DAT_054f0c70);
        }
      }
      else {
        psVar12 = &DAT_054f0c08;
      }
    }
    else {
      psVar12 = (short *)(DAT_054f5738 + uVar8 * 0xd0 +
                          (ulong)(*(uint *)(DAT_054f5738 + uVar8 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if ((((char)psVar12[0x32] == '\0') || (*psVar12 != DAT_04c487d4)) ||
       (*(int *)(psVar12 + 0x30) != 2)) {
      if (*(char *)(param_1 + 0xb149) == '\0') {
        return;
      }
      FUN_01f7e580(uVar6,1);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      return;
    }
  }
  pfVar7 = (float *)FUN_0251b3b0(local_34,0);
  lVar11 = FUN_0251bdc4(local_34,0);
  if ((pfVar7 != (float *)0x0) && (lVar11 != 0)) {
    uVar5 = *(int *)(lVar11 + 4) + 0x20000000U >> 0x1e;
    uVar6 = FUN_0255b714(local_34,1);
    if ((uVar6 & 1) == 0) {
      if ((*pcVar1 == '\0') && (*pcVar1 = '\x01', uVar5 != 2)) {
        FUN_01f7e580(uVar6,0);
        *(undefined1 *)(param_1 + 0xb149) = 1;
      }
    }
    else if ((((DAT_056b6f18 == 0) || (*(int *)(DAT_056b6f18 + 0x588) == 0)) && (uVar5 == 2)) &&
            (lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x68),
            fVar13 = *(float *)(lVar11 + 0x278) - *pfVar7,
            fVar14 = *(float *)(lVar11 + 0x280) - pfVar7[2],
            fVar14 * fVar14 + fVar13 * fVar13 <= 144.00002)) {
      *(undefined8 *)(param_1 + 0x7cf8) = 0x100000001;
      *(undefined4 *)(param_1 + 32000) = 1;
      uVar4 = *(ushort *)(*(long *)(param_1 + 8) + 0x284);
      if (uVar4 < 1000) {
        if ((DAT_04c47dc0 < (short)uVar4) ||
           (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar4 & 0xffffffffU) * 0x10) == 0)) {
          uVar9 = 0xffffffffffffffff;
        }
        else {
          uVar9 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)(short)uVar4 * 0x10 + 8);
        }
        uVar8 = FUN_00a77550(local_34,uVar9,1,1);
        uVar6 = 0x10;
        if ((uVar8 & 1) == 0) {
          uVar6 = 0;
        }
      }
      else {
        uVar6 = 0;
      }
      *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) & 0xffffffffffffffef | uVar6;
    }
  }
  return;
}

