
void FUN_0282eeac(long param_1,long param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  
  param_2 = param_2 + 0x1c;
  puVar13 = (undefined8 *)(param_1 + 0xb478);
  puVar14 = (undefined8 *)(param_1 + 0xb18c);
  puVar11 = (undefined8 *)(param_1 + 0xaea0);
  puVar12 = (undefined8 *)(param_1 + 0xa900);
  uVar4 = FUN_0282a368(puVar12,param_2);
  if ((uVar4 & 1) == 0) {
    memset(puVar12,0,0x2ec);
    *(undefined2 *)(param_1 + 0xa904) = 0xfffe;
    *(undefined1 *)(param_1 + 0xa907) = 0;
    FUN_0277d4ac();
    memset((void *)(param_1 + 0xa90c),0,0x2a5);
    *(undefined4 *)(param_1 + 0xabb4) = 0;
    *(undefined1 *)(param_1 + 0xabcc) = 2;
    *(undefined8 *)(param_1 + 0xabb8) = 0;
    *(undefined8 *)(param_1 + 0xabc0) = 0;
    *(undefined4 *)(param_1 + 0xabc8) = 0;
    *(undefined8 *)(param_1 + 0xabd0) = 0;
    *(undefined8 *)(param_1 + 0xabd8) = 0;
    *(undefined8 *)(param_1 + 44000) = 0;
    *(undefined4 *)(param_1 + 0xabe8) = 0;
    uVar4 = FUN_0282a368((void *)(param_1 + 0xabec),param_2);
    if ((uVar4 & 1) == 0) {
      lVar15 = 0;
      goto LAB_0282f150;
    }
    *puVar12 = *(undefined8 *)(param_1 + 0xabec);
    *(undefined4 *)(param_1 + 0xa908) = *(undefined4 *)(param_1 + 0xabf4);
    memcpy((void *)(param_1 + 0xa90c),(void *)(param_1 + 0xabf8),0x2a5);
    *(undefined8 *)(param_1 + 0xabb4) = *puVar11;
    *(undefined8 *)(param_1 + 0xabbc) = *(undefined8 *)(param_1 + 0xaea8);
    *(undefined8 *)(param_1 + 0xabc4) = *(undefined8 *)(param_1 + 0xaeb0);
    *(undefined1 *)(param_1 + 0xabcc) = *(undefined1 *)(param_1 + 0xaeb8);
    *(undefined8 *)(param_1 + 0xabd0) = *(undefined8 *)(param_1 + 0xaebc);
    *(undefined8 *)(param_1 + 0xabd8) = *(undefined8 *)(param_1 + 0xaec4);
    *(undefined8 *)(param_1 + 44000) = *(undefined8 *)(param_1 + 0xaecc);
    uVar3 = *(uint *)(param_1 + 0xaed4);
    if (1 < uVar3) {
      uVar3 = 0;
    }
    *(uint *)(param_1 + 0xabe8) = uVar3;
    memset((void *)(param_1 + 0xabec),0,0x2ec);
    *(undefined2 *)(param_1 + 0xabf0) = 0xfffe;
    *(undefined1 *)(param_1 + 0xabf3) = 0;
    FUN_0277d4ac((undefined2 *)(param_1 + 0xabf0));
    memset((void *)(param_1 + 0xabf8),0,0x2a5);
    *(undefined1 *)(param_1 + 0xaeb8) = 2;
    *(undefined4 *)puVar11 = 0;
    *(undefined8 *)(param_1 + 0xaea4) = 0;
    *(undefined8 *)(param_1 + 0xaeac) = 0;
    *(undefined8 *)(param_1 + 0xaebc) = 0;
    *(undefined8 *)(param_1 + 0xaec4) = 0;
    *(undefined8 *)(param_1 + 0xaecc) = 0;
    *(undefined4 *)(param_1 + 0xaeb4) = 0;
    *(undefined4 *)(param_1 + 0xaed4) = 0;
    uVar4 = FUN_0282a368(param_1 + 0xaed8,param_2);
    lVar15 = 1;
    if ((uVar4 & 1) == 0) goto LAB_0282f0d4;
LAB_0282f1d0:
    puVar11 = (undefined8 *)((long)puVar12 + lVar15 * 0x2ec);
    uVar2 = *(undefined4 *)(param_1 + 0xaee0);
    *puVar11 = *(undefined8 *)(param_1 + 0xaed8);
    *(undefined4 *)(puVar11 + 1) = uVar2;
    memcpy((void *)((long)puVar11 + 0xc),(void *)(param_1 + 0xaee4),0x2a5);
    uVar5 = *(undefined8 *)(param_1 + 0xb194);
    uVar6 = *(undefined8 *)(param_1 + 0xb19c);
    uVar7 = *puVar14;
    *(undefined1 *)((long)puVar11 + 0x2cc) = *(undefined1 *)(param_1 + 0xb1a4);
    uVar8 = *(undefined8 *)(param_1 + 0xb1b8);
    *(undefined8 *)((long)puVar11 + 700) = uVar5;
    *(undefined8 *)((long)puVar11 + 0x2c4) = uVar6;
    uVar5 = *(undefined8 *)(param_1 + 0xb1b0);
    *(undefined8 *)((long)puVar11 + 0x2b4) = uVar7;
    uVar6 = *(undefined8 *)(param_1 + 0xb1a8);
    puVar11[0x5c] = uVar8;
    puVar11[0x5b] = uVar5;
    uVar3 = *(uint *)(param_1 + 0xb1c0);
    puVar11[0x5a] = uVar6;
    if (1 < uVar3) {
      uVar3 = 0;
    }
    *(uint *)(puVar11 + 0x5d) = uVar3;
    memset((void *)(param_1 + 0xaed8),0,0x2ec);
    *(undefined8 *)(param_1 + 0xaedc) = 0xfffe;
    FUN_0277d4ac((undefined8 *)(param_1 + 0xaedc));
    memset((void *)(param_1 + 0xaee4),0,0x2a5);
    *(undefined4 *)puVar14 = 0;
    *(undefined8 *)(param_1 + 0xb190) = 0;
    *(undefined1 *)(param_1 + 0xb1a4) = 2;
    *(undefined8 *)(param_1 + 0xb198) = 0;
    *(undefined4 *)(param_1 + 0xb1a0) = 0;
    *(undefined8 *)(param_1 + 0xb1a8) = 0;
    *(undefined8 *)(param_1 + 0xb1b0) = 0;
    *(undefined8 *)(param_1 + 0xb1b8) = 0;
    *(undefined4 *)(param_1 + 0xb1c0) = 0;
LAB_0282f2b4:
    lVar15 = lVar15 + 1;
  }
  else {
    uVar4 = FUN_0282a368(param_1 + 0xabec,param_2);
    if ((uVar4 & 1) == 0) {
      lVar15 = 1;
LAB_0282f150:
      memset((void *)(param_1 + 0xabec),0,0x2ec);
      *(undefined8 *)(param_1 + 0xabf0) = 0xfffe;
      FUN_0277d4ac((undefined8 *)(param_1 + 0xabf0));
      memset((void *)(param_1 + 0xabf8),0,0x2a5);
      *(undefined8 *)(param_1 + 0xaea4) = 0;
      *(undefined8 *)(param_1 + 0xaeac) = 0;
      *(undefined8 *)(param_1 + 0xaebc) = 0;
      *(undefined8 *)(param_1 + 0xaec4) = 0;
      *(undefined8 *)(param_1 + 0xaecc) = 0;
      *(undefined4 *)puVar11 = 0;
      *(undefined1 *)(param_1 + 0xaeb8) = 2;
      *(undefined4 *)(param_1 + 0xaeb4) = 0;
      *(undefined4 *)(param_1 + 0xaed4) = 0;
      uVar4 = FUN_0282a368(param_1 + 0xaed8,param_2);
      if ((uVar4 & 1) != 0) goto LAB_0282f1d0;
    }
    else {
      uVar4 = FUN_0282a368(param_1 + 0xaed8,param_2);
      lVar15 = 2;
      if ((uVar4 & 1) != 0) goto LAB_0282f2b4;
    }
LAB_0282f0d4:
    memset((void *)(param_1 + 0xaed8),0,0x2ec);
    *(undefined8 *)(param_1 + 0xaedc) = 0xfffe;
    FUN_0277d4ac((undefined8 *)(param_1 + 0xaedc));
    memset((void *)(param_1 + 0xaee4),0,0x2a5);
    *(undefined4 *)puVar14 = 0;
    *(undefined8 *)(param_1 + 0xb190) = 0;
    *(undefined1 *)(param_1 + 0xb1a4) = 2;
    *(undefined8 *)(param_1 + 0xb198) = 0;
    *(undefined4 *)(param_1 + 0xb1a0) = 0;
    *(undefined8 *)(param_1 + 0xb1a8) = 0;
    *(undefined8 *)(param_1 + 0xb1b0) = 0;
    *(undefined8 *)(param_1 + 0xb1b8) = 0;
    *(undefined4 *)(param_1 + 0xb1c0) = 0;
  }
  puVar14 = (undefined8 *)(param_1 + 0xcd7c);
  pvVar1 = (void *)(param_1 + 0xb1c4);
  uVar4 = FUN_0282a368(pvVar1,param_2);
  if ((uVar4 & 1) == 0) {
    memset(pvVar1,0,0x2ec);
    *(undefined2 *)(param_1 + 0xb1c8) = 0xfffe;
    *(undefined1 *)(param_1 + 0xb1cb) = 0;
    FUN_0277d4ac((undefined2 *)(param_1 + 0xb1c8));
    memset((void *)(param_1 + 0xb1d0),0,0x2a5);
    *(undefined4 *)puVar13 = 0;
    *(undefined8 *)(param_1 + 0xb47c) = 0;
    *(undefined1 *)(param_1 + 0xb490) = 2;
    *(undefined8 *)(param_1 + 0xb484) = 0;
    *(undefined4 *)(param_1 + 0xb48c) = 0;
    *(undefined8 *)(param_1 + 0xb494) = 0;
    *(undefined8 *)(param_1 + 0xb49c) = 0;
    *(undefined8 *)(param_1 + 0xb4a4) = 0;
    *(undefined4 *)(param_1 + 0xb4ac) = 0;
  }
  else {
    if (lVar15 != 3) {
      uVar2 = *(undefined4 *)(param_1 + 0xb1cc);
      puVar11 = (undefined8 *)((long)puVar12 + lVar15 * 0x2ec);
      *puVar11 = *(undefined8 *)(param_1 + 0xb1c4);
      *(undefined4 *)(puVar11 + 1) = uVar2;
      memcpy((void *)((long)puVar11 + 0xc),(void *)(param_1 + 0xb1d0),0x2a5);
      uVar5 = *(undefined8 *)(param_1 + 0xb480);
      uVar6 = *(undefined8 *)(param_1 + 0xb488);
      uVar7 = *puVar13;
      *(undefined1 *)((long)puVar11 + 0x2cc) = *(undefined1 *)(param_1 + 0xb490);
      uVar8 = *(undefined8 *)(param_1 + 0xb4a4);
      *(undefined8 *)((long)puVar11 + 700) = uVar5;
      *(undefined8 *)((long)puVar11 + 0x2c4) = uVar6;
      uVar5 = *(undefined8 *)(param_1 + 0xb49c);
      *(undefined8 *)((long)puVar11 + 0x2b4) = uVar7;
      uVar6 = *(undefined8 *)(param_1 + 0xb494);
      puVar11[0x5c] = uVar8;
      puVar11[0x5b] = uVar5;
      uVar3 = *(uint *)(param_1 + 0xb4ac);
      puVar11[0x5a] = uVar6;
      if (1 < uVar3) {
        uVar3 = 0;
      }
      *(uint *)(puVar11 + 0x5d) = uVar3;
      memset(pvVar1,0,0x2ec);
      *(undefined2 *)(param_1 + 0xb1c8) = 0xfffe;
      *(undefined1 *)(param_1 + 0xb1cb) = 0;
      FUN_0277d4ac((undefined2 *)(param_1 + 0xb1c8));
      memset((void *)(param_1 + 0xb1d0),0,0x2a5);
      *(undefined8 *)(param_1 + 0xb47c) = 0;
      *(undefined8 *)(param_1 + 0xb484) = 0;
      *(undefined8 *)(param_1 + 0xb494) = 0;
      *(undefined8 *)(param_1 + 0xb49c) = 0;
      *(undefined8 *)(param_1 + 0xb4a4) = 0;
      *(undefined4 *)puVar13 = 0;
      *(undefined1 *)(param_1 + 0xb490) = 2;
      *(undefined4 *)(param_1 + 0xb48c) = 0;
      *(undefined4 *)(param_1 + 0xb4ac) = 0;
    }
    lVar15 = lVar15 + 1;
  }
  puVar13 = (undefined8 *)(param_1 + 0xd608);
  puVar11 = (undefined8 *)(param_1 + 0xd31c);
  uVar4 = FUN_0282a368((void *)(param_1 + 0xb4b0),param_2);
  if ((uVar4 & 1) == 0) {
LAB_0282f4fc:
    memset((void *)(param_1 + 0xb4b0),0,0x2ec);
    *(undefined2 *)(param_1 + 0xb4b4) = 0xfffe;
    *(undefined1 *)(param_1 + 0xb4b7) = 0;
    FUN_0277d4ac((undefined2 *)(param_1 + 0xb4b4));
    memset((void *)(param_1 + 0xb4bc),0,0x2a5);
    *(undefined4 *)(param_1 + 0xb764) = 0;
    *(undefined8 *)(param_1 + 0xb768) = 0;
    *(undefined1 *)(param_1 + 0xb77c) = 2;
    *(undefined8 *)(param_1 + 0xb770) = 0;
    *(undefined4 *)(param_1 + 0xb778) = 0;
    *(undefined8 *)(param_1 + 0xb780) = 0;
    *(undefined8 *)(param_1 + 0xb788) = 0;
    *(undefined8 *)(param_1 + 0xb790) = 0;
    *(undefined4 *)(param_1 + 47000) = 0;
  }
  else if (lVar15 != 4) {
    puVar12 = (undefined8 *)((long)puVar12 + lVar15 * 0x2ec);
    uVar2 = *(undefined4 *)(param_1 + 0xb4b8);
    *puVar12 = *(undefined8 *)(param_1 + 0xb4b0);
    *(undefined4 *)(puVar12 + 1) = uVar2;
    memcpy((void *)((long)puVar12 + 0xc),(void *)(param_1 + 0xb4bc),0x2a5);
    uVar10 = *(undefined8 *)(param_1 + 0xb780);
    uVar9 = *(undefined8 *)(param_1 + 0xb788);
    uVar5 = *(undefined8 *)(param_1 + 0xb76c);
    uVar6 = *(undefined8 *)(param_1 + 0xb774);
    uVar7 = *(undefined8 *)(param_1 + 0xb764);
    *(undefined1 *)((long)puVar12 + 0x2cc) = *(undefined1 *)(param_1 + 0xb77c);
    uVar8 = *(undefined8 *)(param_1 + 0xb790);
    puVar12[0x5a] = uVar10;
    puVar12[0x5b] = uVar9;
    *(undefined8 *)((long)puVar12 + 0x2b4) = uVar7;
    uVar3 = *(uint *)(param_1 + 47000);
    *(undefined8 *)((long)puVar12 + 700) = uVar5;
    *(undefined8 *)((long)puVar12 + 0x2c4) = uVar6;
    puVar12[0x5c] = uVar8;
    if (1 < uVar3) {
      uVar3 = 0;
    }
    *(uint *)(puVar12 + 0x5d) = uVar3;
    goto LAB_0282f4fc;
  }
  puVar12 = (undefined8 *)(param_1 + 0xd8f4);
  uVar4 = FUN_0282a368(puVar14,param_2);
  if ((uVar4 & 1) == 0) {
    memset(puVar14,0,0x2ec);
    *(undefined2 *)(param_1 + 0xcd80) = 0xfffe;
    *(undefined1 *)(param_1 + 0xcd83) = 0;
    FUN_0277d4ac();
    memset((void *)(param_1 + 0xcd88),0,0x2a5);
    *(undefined4 *)(param_1 + 0xd030) = 0;
    *(undefined1 *)(param_1 + 0xd048) = 2;
    *(undefined8 *)(param_1 + 0xd034) = 0;
    *(undefined8 *)(param_1 + 0xd03c) = 0;
    *(undefined4 *)(param_1 + 0xd044) = 0;
    *(undefined8 *)(param_1 + 0xd04c) = 0;
    *(undefined8 *)(param_1 + 0xd054) = 0;
    *(undefined8 *)(param_1 + 0xd05c) = 0;
    *(undefined4 *)(param_1 + 0xd064) = 0;
    uVar4 = FUN_0282a368((void *)(param_1 + 0xd068),param_2);
    if ((uVar4 & 1) == 0) {
      lVar15 = 0;
      goto LAB_0282f7ac;
    }
    *puVar14 = *(undefined8 *)(param_1 + 0xd068);
    *(undefined4 *)(param_1 + 0xcd84) = *(undefined4 *)(param_1 + 0xd070);
    memcpy((void *)(param_1 + 0xcd88),(void *)(param_1 + 0xd074),0x2a5);
    *(undefined8 *)(param_1 + 0xd030) = *puVar11;
    *(undefined8 *)(param_1 + 0xd038) = *(undefined8 *)(param_1 + 0xd324);
    *(undefined8 *)(param_1 + 0xd040) = *(undefined8 *)(param_1 + 0xd32c);
    *(undefined1 *)(param_1 + 0xd048) = *(undefined1 *)(param_1 + 0xd334);
    *(undefined8 *)(param_1 + 0xd04c) = *(undefined8 *)(param_1 + 0xd338);
    *(undefined8 *)(param_1 + 0xd054) = *(undefined8 *)(param_1 + 0xd340);
    *(undefined8 *)(param_1 + 0xd05c) = *(undefined8 *)(param_1 + 0xd348);
    uVar3 = *(uint *)(param_1 + 0xd350);
    if (1 < uVar3) {
      uVar3 = 0;
    }
    *(uint *)(param_1 + 0xd064) = uVar3;
    memset((void *)(param_1 + 0xd068),0,0x2ec);
    *(undefined2 *)(param_1 + 0xd06c) = 0xfffe;
    *(undefined1 *)(param_1 + 0xd06f) = 0;
    FUN_0277d4ac((undefined2 *)(param_1 + 0xd06c));
    memset((void *)(param_1 + 0xd074),0,0x2a5);
    *(undefined4 *)puVar11 = 0;
    *(undefined1 *)(param_1 + 0xd334) = 2;
    *(undefined8 *)(param_1 + 0xd320) = 0;
    *(undefined8 *)(param_1 + 0xd328) = 0;
    *(undefined8 *)(param_1 + 0xd338) = 0;
    *(undefined8 *)(param_1 + 0xd340) = 0;
    *(undefined8 *)(param_1 + 0xd348) = 0;
    *(undefined4 *)(param_1 + 0xd330) = 0;
    *(undefined4 *)(param_1 + 0xd350) = 0;
    uVar4 = FUN_0282a368(param_1 + 0xd354,param_2);
    lVar15 = 1;
    if ((uVar4 & 1) == 0) goto LAB_0282f738;
LAB_0282f82c:
    puVar11 = (undefined8 *)((long)puVar14 + lVar15 * 0x2ec);
    uVar2 = *(undefined4 *)(param_1 + 0xd35c);
    *puVar11 = *(undefined8 *)(param_1 + 0xd354);
    *(undefined4 *)(puVar11 + 1) = uVar2;
    memcpy((void *)((long)puVar11 + 0xc),(void *)(param_1 + 0xd360),0x2a5);
    uVar5 = *(undefined8 *)(param_1 + 0xd610);
    uVar6 = *(undefined8 *)(param_1 + 0xd618);
    uVar7 = *puVar13;
    *(undefined1 *)((long)puVar11 + 0x2cc) = *(undefined1 *)(param_1 + 0xd620);
    uVar8 = *(undefined8 *)(param_1 + 0xd634);
    *(undefined8 *)((long)puVar11 + 700) = uVar5;
    *(undefined8 *)((long)puVar11 + 0x2c4) = uVar6;
    uVar5 = *(undefined8 *)(param_1 + 0xd62c);
    *(undefined8 *)((long)puVar11 + 0x2b4) = uVar7;
    uVar6 = *(undefined8 *)(param_1 + 0xd624);
    puVar11[0x5c] = uVar8;
    puVar11[0x5b] = uVar5;
    uVar3 = *(uint *)(param_1 + 0xd63c);
    puVar11[0x5a] = uVar6;
    if (1 < uVar3) {
      uVar3 = 0;
    }
    *(uint *)(puVar11 + 0x5d) = uVar3;
    memset((void *)(param_1 + 0xd354),0,0x2ec);
    *(undefined8 *)(param_1 + 0xd358) = 0xfffe;
    FUN_0277d4ac((undefined8 *)(param_1 + 0xd358));
    memset((void *)(param_1 + 0xd360),0,0x2a5);
    *(undefined4 *)puVar13 = 0;
    *(undefined8 *)(param_1 + 0xd60c) = 0;
    *(undefined1 *)(param_1 + 0xd620) = 2;
    *(undefined8 *)(param_1 + 0xd614) = 0;
    *(undefined4 *)(param_1 + 0xd61c) = 0;
    *(undefined8 *)(param_1 + 0xd624) = 0;
    *(undefined8 *)(param_1 + 0xd62c) = 0;
    *(undefined8 *)(param_1 + 0xd634) = 0;
    *(undefined4 *)(param_1 + 0xd63c) = 0;
LAB_0282f908:
    lVar15 = lVar15 + 1;
  }
  else {
    uVar4 = FUN_0282a368(param_1 + 0xd068,param_2);
    if ((uVar4 & 1) == 0) {
      lVar15 = 1;
LAB_0282f7ac:
      memset((void *)(param_1 + 0xd068),0,0x2ec);
      *(undefined8 *)(param_1 + 0xd06c) = 0xfffe;
      FUN_0277d4ac((undefined8 *)(param_1 + 0xd06c));
      memset((void *)(param_1 + 0xd074),0,0x2a5);
      *(undefined4 *)puVar11 = 0;
      *(undefined1 *)(param_1 + 0xd334) = 2;
      *(undefined8 *)(param_1 + 0xd320) = 0;
      *(undefined8 *)(param_1 + 0xd328) = 0;
      *(undefined4 *)(param_1 + 0xd330) = 0;
      *(undefined8 *)(param_1 + 0xd338) = 0;
      *(undefined8 *)(param_1 + 0xd340) = 0;
      *(undefined8 *)(param_1 + 0xd348) = 0;
      *(undefined4 *)(param_1 + 0xd350) = 0;
      uVar4 = FUN_0282a368(param_1 + 0xd354,param_2);
      if ((uVar4 & 1) != 0) goto LAB_0282f82c;
    }
    else {
      uVar4 = FUN_0282a368(param_1 + 0xd354,param_2);
      lVar15 = 2;
      if ((uVar4 & 1) != 0) goto LAB_0282f908;
    }
LAB_0282f738:
    memset((void *)(param_1 + 0xd354),0,0x2ec);
    *(undefined8 *)(param_1 + 0xd358) = 0xfffe;
    FUN_0277d4ac((undefined8 *)(param_1 + 0xd358));
    memset((void *)(param_1 + 0xd360),0,0x2a5);
    *(undefined4 *)puVar13 = 0;
    *(undefined8 *)(param_1 + 0xd60c) = 0;
    *(undefined1 *)(param_1 + 0xd620) = 2;
    *(undefined8 *)(param_1 + 0xd614) = 0;
    *(undefined4 *)(param_1 + 0xd61c) = 0;
    *(undefined8 *)(param_1 + 0xd624) = 0;
    *(undefined8 *)(param_1 + 0xd62c) = 0;
    *(undefined8 *)(param_1 + 0xd634) = 0;
    *(undefined4 *)(param_1 + 0xd63c) = 0;
  }
  pvVar1 = (void *)(param_1 + 0xd640);
  uVar4 = FUN_0282a368(pvVar1,param_2);
  if ((uVar4 & 1) == 0) {
    memset(pvVar1,0,0x2ec);
    *(undefined2 *)(param_1 + 0xd644) = 0xfffe;
    *(undefined1 *)(param_1 + 0xd647) = 0;
    FUN_0277d4ac((undefined2 *)(param_1 + 0xd644));
    memset((void *)(param_1 + 0xd64c),0,0x2a5);
    *(undefined4 *)puVar12 = 0;
    *(undefined8 *)(param_1 + 0xd8f8) = 0;
    *(undefined1 *)(param_1 + 0xd90c) = 2;
    *(undefined8 *)(param_1 + 0xd900) = 0;
    *(undefined4 *)(param_1 + 0xd908) = 0;
    *(undefined8 *)(param_1 + 0xd910) = 0;
    *(undefined8 *)(param_1 + 0xd918) = 0;
    *(undefined8 *)(param_1 + 0xd920) = 0;
    *(undefined4 *)(param_1 + 0xd928) = 0;
  }
  else {
    if (lVar15 != 3) {
      uVar2 = *(undefined4 *)(param_1 + 0xd648);
      puVar13 = (undefined8 *)((long)puVar14 + lVar15 * 0x2ec);
      *puVar13 = *(undefined8 *)(param_1 + 0xd640);
      *(undefined4 *)(puVar13 + 1) = uVar2;
      memcpy((void *)((long)puVar13 + 0xc),(void *)(param_1 + 0xd64c),0x2a5);
      uVar5 = *(undefined8 *)(param_1 + 0xd8fc);
      uVar6 = *(undefined8 *)(param_1 + 0xd904);
      uVar7 = *puVar12;
      *(undefined1 *)((long)puVar13 + 0x2cc) = *(undefined1 *)(param_1 + 0xd90c);
      uVar8 = *(undefined8 *)(param_1 + 0xd920);
      *(undefined8 *)((long)puVar13 + 700) = uVar5;
      *(undefined8 *)((long)puVar13 + 0x2c4) = uVar6;
      uVar5 = *(undefined8 *)(param_1 + 0xd918);
      *(undefined8 *)((long)puVar13 + 0x2b4) = uVar7;
      uVar6 = *(undefined8 *)(param_1 + 0xd910);
      puVar13[0x5c] = uVar8;
      puVar13[0x5b] = uVar5;
      uVar3 = *(uint *)(param_1 + 0xd928);
      puVar13[0x5a] = uVar6;
      if (1 < uVar3) {
        uVar3 = 0;
      }
      *(uint *)(puVar13 + 0x5d) = uVar3;
      memset(pvVar1,0,0x2ec);
      *(undefined2 *)(param_1 + 0xd644) = 0xfffe;
      *(undefined1 *)(param_1 + 0xd647) = 0;
      FUN_0277d4ac((undefined2 *)(param_1 + 0xd644));
      memset((void *)(param_1 + 0xd64c),0,0x2a5);
      *(undefined4 *)puVar12 = 0;
      *(undefined8 *)(param_1 + 0xd8f8) = 0;
      *(undefined1 *)(param_1 + 0xd90c) = 2;
      *(undefined8 *)(param_1 + 0xd900) = 0;
      *(undefined4 *)(param_1 + 0xd908) = 0;
      *(undefined8 *)(param_1 + 0xd910) = 0;
      *(undefined8 *)(param_1 + 0xd918) = 0;
      *(undefined8 *)(param_1 + 0xd920) = 0;
      *(undefined4 *)(param_1 + 0xd928) = 0;
    }
    lVar15 = lVar15 + 1;
  }
  uVar4 = FUN_0282a368((void *)(param_1 + 0xd92c),param_2);
  if ((uVar4 & 1) != 0) {
    if (lVar15 == 4) {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0xd934);
    puVar14 = (undefined8 *)((long)puVar14 + lVar15 * 0x2ec);
    *puVar14 = *(undefined8 *)(param_1 + 0xd92c);
    *(undefined4 *)(puVar14 + 1) = uVar2;
    memcpy((void *)((long)puVar14 + 0xc),(void *)(param_1 + 0xd938),0x2a5);
    uVar10 = *(undefined8 *)(param_1 + 0xdbfc);
    uVar9 = *(undefined8 *)(param_1 + 0xdc04);
    uVar5 = *(undefined8 *)(param_1 + 0xdbe8);
    uVar6 = *(undefined8 *)(param_1 + 0xdbf0);
    uVar7 = *(undefined8 *)(param_1 + 0xdbe0);
    *(undefined1 *)((long)puVar14 + 0x2cc) = *(undefined1 *)(param_1 + 0xdbf8);
    uVar8 = *(undefined8 *)(param_1 + 0xdc0c);
    puVar14[0x5a] = uVar10;
    puVar14[0x5b] = uVar9;
    *(undefined8 *)((long)puVar14 + 0x2b4) = uVar7;
    uVar3 = *(uint *)(param_1 + 0xdc14);
    *(undefined8 *)((long)puVar14 + 700) = uVar5;
    *(undefined8 *)((long)puVar14 + 0x2c4) = uVar6;
    puVar14[0x5c] = uVar8;
    if (1 < uVar3) {
      uVar3 = 0;
    }
    *(uint *)(puVar14 + 0x5d) = uVar3;
  }
  memset((void *)(param_1 + 0xd92c),0,0x2ec);
  *(undefined2 *)(param_1 + 0xd930) = 0xfffe;
  *(undefined1 *)(param_1 + 0xd933) = 0;
  FUN_0277d4ac((undefined2 *)(param_1 + 0xd930));
  memset((void *)(param_1 + 0xd938),0,0x2a5);
  *(undefined4 *)(param_1 + 0xdbe0) = 0;
  *(undefined8 *)(param_1 + 0xdbe4) = 0;
  *(undefined1 *)(param_1 + 0xdbf8) = 2;
  *(undefined8 *)(param_1 + 0xdbec) = 0;
  *(undefined4 *)(param_1 + 0xdbf4) = 0;
  *(undefined8 *)(param_1 + 0xdbfc) = 0;
  *(undefined8 *)(param_1 + 0xdc04) = 0;
  *(undefined8 *)(param_1 + 0xdc0c) = 0;
  *(undefined4 *)(param_1 + 0xdc14) = 0;
  return;
}

