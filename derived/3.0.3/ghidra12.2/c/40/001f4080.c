
/* WARNING: Removing unreachable block (ram,0x001f4754) */
/* WARNING: Removing unreachable block (ram,0x001f470c) */
/* WARNING: Removing unreachable block (ram,0x001f46c0) */
/* WARNING: Removing unreachable block (ram,0x001f4674) */
/* WARNING: Removing unreachable block (ram,0x001f4628) */
/* WARNING: Removing unreachable block (ram,0x001f45e0) */
/* WARNING: Removing unreachable block (ram,0x001f4598) */
/* WARNING: Removing unreachable block (ram,0x001f454c) */
/* WARNING: Removing unreachable block (ram,0x001f4504) */
/* WARNING: Removing unreachable block (ram,0x001f44b8) */
/* WARNING: Removing unreachable block (ram,0x001f446c) */
/* WARNING: Removing unreachable block (ram,0x001f4420) */
/* WARNING: Removing unreachable block (ram,0x001f43d0) */
/* WARNING: Removing unreachable block (ram,0x001f4384) */
/* WARNING: Removing unreachable block (ram,0x001f433c) */
/* WARNING: Removing unreachable block (ram,0x001f42ec) */
/* WARNING: Removing unreachable block (ram,0x001f41cc) */
/* WARNING: Removing unreachable block (ram,0x001f4118) */
/* WARNING: Removing unreachable block (ram,0x001f41a4) */
/* WARNING: Removing unreachable block (ram,0x001f42c4) */
/* WARNING: Removing unreachable block (ram,0x001f4314) */
/* WARNING: Removing unreachable block (ram,0x001f4360) */
/* WARNING: Removing unreachable block (ram,0x001f43ac) */
/* WARNING: Removing unreachable block (ram,0x001f43f8) */
/* WARNING: Removing unreachable block (ram,0x001f4448) */
/* WARNING: Removing unreachable block (ram,0x001f4490) */
/* WARNING: Removing unreachable block (ram,0x001f44e0) */
/* WARNING: Removing unreachable block (ram,0x001f4528) */
/* WARNING: Removing unreachable block (ram,0x001f4570) */
/* WARNING: Removing unreachable block (ram,0x001f45bc) */
/* WARNING: Removing unreachable block (ram,0x001f4604) */
/* WARNING: Removing unreachable block (ram,0x001f464c) */
/* WARNING: Removing unreachable block (ram,0x001f469c) */
/* WARNING: Removing unreachable block (ram,0x001f46e4) */
/* WARNING: Removing unreachable block (ram,0x001f4730) */
/* WARNING: Removing unreachable block (ram,0x001f4778) */

void FUN_001f4080(char *param_1,undefined8 param_2)

{
  char cVar1;
  size_t sVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  char acStack_a0 [64];
  char local_60 [64];
  
  lVar7 = 0;
  cVar1 = *param_1;
  pcVar5 = param_1;
  while (cVar1 != '\0') {
    acStack_a0[lVar7 + 0x40] = cVar1;
    if (lVar7 == 0x3e) {
      lVar6 = 0x3f;
      pcVar5 = local_60 + 0x3f;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4140;
    }
    if (pcVar5[1] == '\0') {
      lVar6 = lVar7 + 1;
      uVar3 = -lVar7 + 0x3f;
      if (uVar3 == 0) goto LAB_001f416c;
      pcVar5 = acStack_a0 + lVar7 + 0x41;
      uVar8 = -lVar7 + 0x3e;
      uVar9 = uVar3 & 3;
      if (uVar9 == 0) goto LAB_001f4150;
      goto LAB_001f4140;
    }
    acStack_a0[lVar7 + 0x41] = pcVar5[1];
    lVar7 = lVar7 + 2;
    pcVar5 = param_1 + lVar7;
    cVar1 = *pcVar5;
  }
  uVar3 = -lVar7 + 0x40;
  if (uVar3 == 0) {
    pcVar5 = acStack_a0 + lVar7 + 0x40;
    if (lVar7 - 0x41U < 0xfffffffffffffffd || lVar7 == 0x3e) goto LAB_001f4180;
LAB_001f41e8:
    if (lVar7 == 0x40) goto LAB_001f422c;
    uVar3 = 0;
    uVar8 = 0;
    uVar9 = 1;
LAB_001f4200:
    uVar3 = uVar3 & 0xfffffffffffffffc;
    pcVar4 = pcVar5;
    do {
      uVar9 = uVar9 - 1;
      pcVar5 = pcVar4 + 1;
      *pcVar4 = '\0';
      pcVar4 = pcVar5;
    } while (uVar9 != 0);
  }
  else {
    pcVar5 = acStack_a0 + lVar7 + 0x40;
    uVar8 = -lVar7 + 0x3f;
    uVar9 = uVar3 & 3;
    lVar6 = lVar7;
    if (uVar9 != 0) {
LAB_001f4140:
      uVar3 = uVar3 & 0xfffffffffffffffc;
      pcVar4 = pcVar5;
      do {
        uVar9 = uVar9 - 1;
        pcVar5 = pcVar4 + 1;
        *pcVar4 = '\0';
        pcVar4 = pcVar5;
      } while (uVar9 != 0);
    }
LAB_001f4150:
    if (2 < uVar8) {
      do {
        uVar3 = uVar3 - 4;
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + 4;
      } while (uVar3 != 0);
    }
LAB_001f416c:
    pcVar5 = acStack_a0 + lVar6 + 0x40;
    lVar7 = lVar6;
    if (0xfffffffffffffffc < lVar6 - 0x41U && lVar6 != 0x3e) goto LAB_001f41e8;
LAB_001f4180:
    acStack_a0[lVar7 + 0x40] = '2';
    if (lVar7 == 0x3e) {
      pcVar5 = pcVar5 + 1;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[1] = '5';
    if (lVar7 == 0x3d) {
      pcVar5 = pcVar5 + 2;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[2] = '8';
    if (lVar7 == 0x3c) {
      pcVar5 = pcVar5 + 3;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[3] = 'E';
    if (lVar7 == 0x3b) {
      pcVar5 = pcVar5 + 4;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[4] = 'A';
    if (lVar7 == 0x3a) {
      pcVar5 = pcVar5 + 5;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[5] = 'F';
    if (lVar7 == 0x39) {
      pcVar5 = pcVar5 + 6;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[6] = 'A';
    if (lVar7 == 0x38) {
      pcVar5 = pcVar5 + 7;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[7] = '5';
    if (lVar7 == 0x37) {
      pcVar5 = pcVar5 + 8;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[8] = '-';
    if (lVar7 == 0x36) {
      pcVar5 = pcVar5 + 9;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[9] = 'E';
    if (lVar7 == 0x35) {
      pcVar5 = pcVar5 + 10;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[10] = '9';
    if (lVar7 == 0x34) {
      pcVar5 = pcVar5 + 0xb;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0xb] = '1';
    if (lVar7 == 0x33) {
      pcVar5 = pcVar5 + 0xc;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0xc] = '4';
    if (lVar7 == 0x32) {
      pcVar5 = pcVar5 + 0xd;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0xd] = '-';
    if (lVar7 == 0x31) {
      pcVar5 = pcVar5 + 0xe;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0xe] = '4';
    if (lVar7 == 0x30) {
      pcVar5 = pcVar5 + 0xf;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0xf] = '7';
    if (lVar7 == 0x2f) {
      pcVar5 = pcVar5 + 0x10;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x10] = 'D';
    if (lVar7 == 0x2e) {
      pcVar5 = pcVar5 + 0x11;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x11] = 'A';
    if (lVar7 == 0x2d) {
      pcVar5 = pcVar5 + 0x12;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x12] = '-';
    if (lVar7 == 0x2c) {
      pcVar5 = pcVar5 + 0x13;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x13] = '9';
    if (lVar7 == 0x2b) {
      pcVar5 = pcVar5 + 0x14;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x14] = '5';
    if (lVar7 == 0x2a) {
      pcVar5 = pcVar5 + 0x15;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x15] = 'C';
    if (lVar7 == 0x29) {
      pcVar5 = pcVar5 + 0x16;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x16] = 'A';
    if (lVar7 == 0x28) {
      pcVar5 = pcVar5 + 0x17;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x17] = '-';
    if (lVar7 == 0x27) {
      pcVar5 = pcVar5 + 0x18;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x18] = 'C';
    if (lVar7 == 0x26) {
      pcVar5 = pcVar5 + 0x19;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x19] = '5';
    if (lVar7 == 0x25) {
      pcVar5 = pcVar5 + 0x1a;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x1a] = 'A';
    if (lVar7 == 0x24) {
      pcVar5 = pcVar5 + 0x1b;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x1b] = 'B';
    if (lVar7 == 0x23) {
      pcVar5 = pcVar5 + 0x1c;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x1c] = '0';
    if (lVar7 == 0x22) {
      pcVar5 = pcVar5 + 0x1d;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x1d] = 'D';
    if (lVar7 == 0x21) {
      pcVar5 = pcVar5 + 0x1e;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x1e] = 'C';
    if (lVar7 == 0x20) {
      pcVar5 = pcVar5 + 0x1f;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x1f] = '8';
    if (lVar7 == 0x1f) {
      pcVar5 = pcVar5 + 0x20;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x20] = '5';
    if (lVar7 == 0x1e) {
      pcVar5 = pcVar5 + 0x21;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x21] = 'B';
    if (lVar7 == 0x1d) {
      pcVar5 = pcVar5 + 0x22;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x22] = '1';
    if (lVar7 == 0x1c) {
      pcVar5 = pcVar5 + 0x23;
      uVar3 = 0;
      uVar8 = 0;
      uVar9 = 1;
      goto LAB_001f4200;
    }
    pcVar5[0x23] = '1';
    pcVar5 = pcVar5 + 0x24;
    uVar3 = -lVar7 + 0x1c;
    uVar8 = -lVar7 + 0x1b;
    uVar9 = uVar3 & 3;
    if (uVar9 != 0) goto LAB_001f4200;
  }
  if (2 < uVar8) {
    do {
      uVar3 = uVar3 - 4;
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + 4;
    } while (uVar3 != 0);
  }
LAB_001f422c:
  FUN_0018c118(local_60,acStack_a0,0x40);
  local_a8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  sVar2 = strnlen(acStack_a0,0x40);
  nn::crypto::GenerateSha1Hash(&local_b8,0x14,acStack_a0,sVar2);
  FUN_0018bb00(&local_b8,0x14,0,&stack0xffffffffffffffe8);
  FUN_0018bb00(&local_b8,0x14,param_2,&stack0xffffffffffffffe8);
  return;
}

