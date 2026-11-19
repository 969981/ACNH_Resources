
void FUN_039cf910(long param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined4 *puVar23;
  long lVar24;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  puVar11 = PTR_DAT_04bb31c8;
  *(undefined4 *)(param_1 + 0x498) = 0;
  lVar22 = *(long *)puVar11;
  *(undefined8 *)(param_1 + 0x13f4) = 0;
  *(undefined8 *)(param_1 + 0x13fc) = 0;
  puVar23 = *(undefined4 **)(lVar22 + 0x40);
  *(undefined4 *)(param_1 + 0x18) = *puVar23;
  *(undefined4 *)(param_1 + 0x1c) = puVar23[1];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x30) = puVar23[6];
  *(undefined4 *)(param_1 + 0x34) = puVar23[7];
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(puVar23 + 10);
  uVar17 = *(undefined8 *)(puVar23 + 0x10);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  uVar18 = *(undefined8 *)(puVar23 + 0xe);
  *(undefined8 *)(param_1 + 0x5f) = *(undefined8 *)((long)puVar23 + 0x47);
  *(undefined8 *)(param_1 + 0x50) = uVar18;
  *(undefined8 *)(param_1 + 0x58) = uVar17;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  FUN_038fd1e0(param_1 + 0x68);
  FUN_038fd2f0(param_1 + 0x68,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(puVar23 + 0x24);
  puVar2 = (uint *)(param_1 + 0xec);
  *(undefined4 *)(param_1 + 0xb0) = uVar4;
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  *(undefined1 *)(param_1 + 0xde) = 0;
  *(undefined1 *)(param_1 + 0xdc) = *(undefined1 *)(param_1 + 0xbc4);
  *(undefined1 *)(param_1 + 0xdd) = *(undefined1 *)(param_1 + 0xbc4);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  puVar23 = *(undefined4 **)(lVar22 + 0x18);
  *(undefined4 *)(param_1 + 0x100) = *puVar23;
  *(undefined4 *)(param_1 + 0x104) = puVar23[1];
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x118) = puVar23[6];
  *(undefined4 *)(param_1 + 0x11c) = puVar23[7];
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(puVar23 + 10);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  uVar18 = *(undefined8 *)(puVar23 + 0xe);
  uVar17 = *(undefined8 *)(puVar23 + 0x10);
  *(undefined8 *)(param_1 + 0x147) = *(undefined8 *)((long)puVar23 + 0x47);
  *(undefined8 *)(param_1 + 0x130) = uVar3;
  *(undefined8 *)(param_1 + 0x138) = uVar18;
  *(undefined8 *)(param_1 + 0x140) = uVar17;
  FUN_038fd1e0(param_1 + 0x150);
  FUN_038fd2f0(param_1 + 0x150,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(puVar23 + 0x24);
  puVar2 = (uint *)(param_1 + 0x1d4);
  *(undefined4 *)(param_1 + 0x198) = uVar4;
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  *(undefined1 *)(param_1 + 0x1c6) = 0;
  *(undefined1 *)(param_1 + 0x1c4) = *(undefined1 *)(param_1 + 0xcc4);
  *(undefined1 *)(param_1 + 0x1c5) = *(undefined1 *)(param_1 + 0xcc4);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  puVar23 = *(undefined4 **)(lVar22 + 0x40);
  *(undefined4 *)(param_1 + 0x1e8) = *puVar23;
  *(undefined4 *)(param_1 + 0x1ec) = puVar23[1];
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x200) = puVar23[6];
  *(undefined4 *)(param_1 + 0x204) = puVar23[7];
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(puVar23 + 10);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  uVar18 = *(undefined8 *)(puVar23 + 0xe);
  uVar17 = *(undefined8 *)(puVar23 + 0x10);
  *(undefined8 *)(param_1 + 0x22f) = *(undefined8 *)((long)puVar23 + 0x47);
  *(undefined8 *)(param_1 + 0x228) = uVar17;
  *(undefined8 *)(param_1 + 0x220) = uVar18;
  *(undefined8 *)(param_1 + 0x218) = uVar3;
  FUN_038fd1e0(param_1 + 0x238);
  FUN_038fd2f0(param_1 + 0x238,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(puVar23 + 0x24);
  puVar2 = (uint *)(param_1 + 700);
  *(undefined4 *)(param_1 + 0x280) = uVar4;
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  *(undefined1 *)(param_1 + 0x2ae) = 0;
  *(undefined1 *)(param_1 + 0x2ac) = *(undefined1 *)(param_1 + 0xdc4);
  *(undefined1 *)(param_1 + 0x2ad) = *(undefined1 *)(param_1 + 0xdc4);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  puVar23 = *(undefined4 **)(lVar22 + 0x18);
  *(undefined4 *)(param_1 + 0x2d0) = *puVar23;
  *(undefined4 *)(param_1 + 0x2d4) = puVar23[1];
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x2e8) = puVar23[6];
  *(undefined4 *)(param_1 + 0x2ec) = puVar23[7];
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(puVar23 + 10);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  uVar18 = *(undefined8 *)(puVar23 + 0xe);
  uVar17 = *(undefined8 *)(puVar23 + 0x10);
  *(undefined8 *)(param_1 + 0x317) = *(undefined8 *)((long)puVar23 + 0x47);
  *(undefined8 *)(param_1 + 0x310) = uVar17;
  *(undefined8 *)(param_1 + 0x308) = uVar18;
  *(undefined8 *)(param_1 + 0x300) = uVar3;
  FUN_038fd1e0(param_1 + 800);
  FUN_038fd2f0(param_1 + 800,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(puVar23 + 0x24);
  puVar2 = (uint *)(param_1 + 0x3a4);
  *(undefined4 *)(param_1 + 0x368) = uVar4;
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  *(undefined1 *)(param_1 + 0x396) = 0;
  *(undefined1 *)(param_1 + 0x394) = *(undefined1 *)(param_1 + 0xec4);
  *(undefined1 *)(param_1 + 0x395) = *(undefined1 *)(param_1 + 0xec4);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  puVar23 = *(undefined4 **)(lVar22 + 0x18);
  *(undefined4 *)(param_1 + 0x3b8) = *puVar23;
  *(undefined4 *)(param_1 + 0x3bc) = puVar23[1];
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x3d0) = puVar23[6];
  *(undefined4 *)(param_1 + 0x3d4) = puVar23[7];
  *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x3e0) = *(undefined8 *)(puVar23 + 10);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  uVar18 = *(undefined8 *)(puVar23 + 0xe);
  uVar17 = *(undefined8 *)(puVar23 + 0x10);
  *(undefined8 *)(param_1 + 0x3ff) = *(undefined8 *)((long)puVar23 + 0x47);
  *(undefined8 *)(param_1 + 0x3f8) = uVar17;
  *(undefined8 *)(param_1 + 0x3f0) = uVar18;
  *(undefined8 *)(param_1 + 1000) = uVar3;
  FUN_038fd1e0(param_1 + 0x408);
  FUN_038fd2f0(param_1 + 0x408,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 0x448) = *(undefined8 *)(puVar23 + 0x24);
  puVar2 = (uint *)(param_1 + 0x48c);
  *(undefined4 *)(param_1 + 0x450) = uVar4;
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  *(undefined1 *)(param_1 + 0x47e) = 0;
  *(undefined1 *)(param_1 + 0x47c) = *(undefined1 *)(param_1 + 0xfc4);
  *(undefined1 *)(param_1 + 0x47d) = *(undefined1 *)(param_1 + 0xfc4);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  *(undefined4 *)(param_1 + 0xa70) = 0;
  puVar23 = *(undefined4 **)(lVar22 + 0x40);
  *(undefined4 *)(param_1 + 0x5f0) = *puVar23;
  *(undefined4 *)(param_1 + 0x5f4) = puVar23[1];
  *(undefined8 *)(param_1 + 0x5f8) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 0x600) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x608) = puVar23[6];
  *(undefined4 *)(param_1 + 0x60c) = puVar23[7];
  *(undefined8 *)(param_1 + 0x610) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x618) = *(undefined8 *)(puVar23 + 10);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  uVar18 = *(undefined8 *)(puVar23 + 0xe);
  uVar17 = *(undefined8 *)(puVar23 + 0x10);
  *(undefined8 *)(param_1 + 0x637) = *(undefined8 *)((long)puVar23 + 0x47);
  *(undefined8 *)(param_1 + 0x630) = uVar17;
  *(undefined8 *)(param_1 + 0x628) = uVar18;
  *(undefined8 *)(param_1 + 0x620) = uVar3;
  FUN_038fd1e0(param_1 + 0x640);
  FUN_038fd2f0(param_1 + 0x640,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 0x680) = *(undefined8 *)(puVar23 + 0x24);
  puVar2 = (uint *)(param_1 + 0x6c4);
  *(undefined4 *)(param_1 + 0x688) = uVar4;
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  puVar23 = *(undefined4 **)(lVar22 + 0x18);
  *(undefined4 *)(param_1 + 0x6d8) = *puVar23;
  *(undefined4 *)(param_1 + 0x6dc) = puVar23[1];
  *(undefined8 *)(param_1 + 0x6e0) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 0x6e8) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x6f0) = puVar23[6];
  *(undefined4 *)(param_1 + 0x6f4) = puVar23[7];
  *(undefined8 *)(param_1 + 0x6f8) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x700) = *(undefined8 *)(puVar23 + 10);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  uVar18 = *(undefined8 *)(puVar23 + 0xe);
  uVar17 = *(undefined8 *)(puVar23 + 0x10);
  *(undefined8 *)(param_1 + 0x71f) = *(undefined8 *)((long)puVar23 + 0x47);
  *(undefined8 *)(param_1 + 0x718) = uVar17;
  *(undefined8 *)(param_1 + 0x710) = uVar18;
  *(undefined8 *)(param_1 + 0x708) = uVar3;
  FUN_038fd1e0(param_1 + 0x728);
  FUN_038fd2f0(param_1 + 0x728,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 0x768) = *(undefined8 *)(puVar23 + 0x24);
  puVar2 = (uint *)(param_1 + 0x7ac);
  *(undefined4 *)(param_1 + 0x770) = uVar4;
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  puVar23 = *(undefined4 **)(lVar22 + 0x40);
  *(undefined4 *)(param_1 + 0x7c0) = *puVar23;
  *(undefined4 *)(param_1 + 0x7c4) = puVar23[1];
  *(undefined8 *)(param_1 + 0x7c8) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 2000) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x7d8) = puVar23[6];
  *(undefined4 *)(param_1 + 0x7dc) = puVar23[7];
  *(undefined8 *)(param_1 + 0x7e0) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x7e8) = *(undefined8 *)(puVar23 + 10);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  uVar18 = *(undefined8 *)(puVar23 + 0xe);
  uVar17 = *(undefined8 *)(puVar23 + 0x10);
  *(undefined8 *)(param_1 + 0x807) = *(undefined8 *)((long)puVar23 + 0x47);
  *(undefined8 *)(param_1 + 0x800) = uVar17;
  *(undefined8 *)(param_1 + 0x7f8) = uVar18;
  *(undefined8 *)(param_1 + 0x7f0) = uVar3;
  FUN_038fd1e0(param_1 + 0x810);
  FUN_038fd2f0(param_1 + 0x810,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 0x850) = *(undefined8 *)(puVar23 + 0x24);
  puVar2 = (uint *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x858) = uVar4;
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  puVar23 = *(undefined4 **)(lVar22 + 0x18);
  *(undefined4 *)(param_1 + 0x8a8) = *puVar23;
  *(undefined4 *)(param_1 + 0x8ac) = puVar23[1];
  *(undefined8 *)(param_1 + 0x8b0) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 0x8b8) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x8c0) = puVar23[6];
  *(undefined4 *)(param_1 + 0x8c4) = puVar23[7];
  *(undefined8 *)(param_1 + 0x8c8) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x8d0) = *(undefined8 *)(puVar23 + 10);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  uVar18 = *(undefined8 *)(puVar23 + 0xe);
  uVar17 = *(undefined8 *)(puVar23 + 0x10);
  *(undefined8 *)(param_1 + 0x8ef) = *(undefined8 *)((long)puVar23 + 0x47);
  *(undefined8 *)(param_1 + 0x8e8) = uVar17;
  *(undefined8 *)(param_1 + 0x8e0) = uVar18;
  *(undefined8 *)(param_1 + 0x8d8) = uVar3;
  FUN_038fd1e0(param_1 + 0x8f8);
  FUN_038fd2f0(param_1 + 0x8f8,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 0x938) = *(undefined8 *)(puVar23 + 0x24);
  puVar2 = (uint *)(param_1 + 0x97c);
  *(undefined4 *)(param_1 + 0x940) = uVar4;
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  puVar23 = *(undefined4 **)(lVar22 + 0x18);
  *(undefined4 *)(param_1 + 0x990) = *puVar23;
  *(undefined4 *)(param_1 + 0x994) = puVar23[1];
  *(undefined8 *)(param_1 + 0x998) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 0x9a0) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x9a8) = puVar23[6];
  *(undefined4 *)(param_1 + 0x9ac) = puVar23[7];
  *(undefined8 *)(param_1 + 0x9b0) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x9b8) = *(undefined8 *)(puVar23 + 10);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  uVar18 = *(undefined8 *)(puVar23 + 0xe);
  uVar17 = *(undefined8 *)(puVar23 + 0x10);
  *(undefined8 *)(param_1 + 0x9d7) = *(undefined8 *)((long)puVar23 + 0x47);
  *(undefined8 *)(param_1 + 0x9d0) = uVar17;
  *(undefined8 *)(param_1 + 0x9c8) = uVar18;
  *(undefined8 *)(param_1 + 0x9c0) = uVar3;
  FUN_038fd1e0(param_1 + 0x9e0);
  FUN_038fd2f0(param_1 + 0x9e0,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 0xa20) = *(undefined8 *)(puVar23 + 0x24);
  puVar2 = (uint *)(param_1 + 0xa64);
  *(undefined4 *)(param_1 + 0xa28) = uVar4;
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar23 = *(undefined4 **)(lVar22 + 0x20);
  *(undefined4 *)(param_1 + 0x1a10) = *puVar23;
  *(undefined4 *)(param_1 + 0x1a14) = puVar23[1];
  *(undefined8 *)(param_1 + 0x1a18) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 0x1a20) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x1a28) = puVar23[6];
  *(undefined4 *)(param_1 + 0x1a2c) = puVar23[7];
  *(undefined8 *)(param_1 + 0x1a30) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x1a38) = *(undefined8 *)(puVar23 + 10);
  uVar18 = *(undefined8 *)(puVar23 + 0x10);
  uVar17 = *(undefined8 *)((long)puVar23 + 0x47);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  *(undefined8 *)(param_1 + 0x1a48) = *(undefined8 *)(puVar23 + 0xe);
  *(undefined8 *)(param_1 + 0x1a57) = uVar17;
  *(undefined8 *)(param_1 + 0x1a50) = uVar18;
  *(undefined8 *)(param_1 + 0x1a40) = uVar3;
  FUN_038fd1e0(param_1 + 0x1a60);
  FUN_038fd2f0(param_1 + 0x1a60,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 0x1aa0) = *(undefined8 *)(puVar23 + 0x24);
  *(undefined4 *)(param_1 + 0x1aa8) = uVar4;
  puVar2 = (uint *)(param_1 + 0x1ae4);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  puVar23 = *(undefined4 **)(lVar22 + 0x20);
  *(undefined4 *)(param_1 + 0x1af8) = *puVar23;
  *(undefined4 *)(param_1 + 0x1afc) = puVar23[1];
  *(undefined8 *)(param_1 + 0x1b00) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 0x1b08) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x1b10) = puVar23[6];
  *(undefined4 *)(param_1 + 0x1b14) = puVar23[7];
  *(undefined8 *)(param_1 + 0x1b18) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x1b20) = *(undefined8 *)(puVar23 + 10);
  uVar18 = *(undefined8 *)(puVar23 + 0x10);
  uVar17 = *(undefined8 *)((long)puVar23 + 0x47);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  *(undefined8 *)(param_1 + 0x1b30) = *(undefined8 *)(puVar23 + 0xe);
  *(undefined8 *)(param_1 + 0x1b3f) = uVar17;
  *(undefined8 *)(param_1 + 0x1b38) = uVar18;
  *(undefined8 *)(param_1 + 0x1b28) = uVar3;
  FUN_038fd1e0(param_1 + 0x1b48);
  FUN_038fd2f0(param_1 + 0x1b48,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 0x1b88) = *(undefined8 *)(puVar23 + 0x24);
  *(undefined4 *)(param_1 + 0x1b90) = uVar4;
  puVar2 = (uint *)(param_1 + 0x1bcc);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  puVar23 = *(undefined4 **)(lVar22 + 0x40);
  *(undefined4 *)(param_1 + 0x1be0) = *puVar23;
  *(undefined4 *)(param_1 + 0x1be4) = puVar23[1];
  *(undefined8 *)(param_1 + 0x1be8) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 0x1bf0) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x1bf8) = puVar23[6];
  *(undefined4 *)(param_1 + 0x1bfc) = puVar23[7];
  *(undefined8 *)(param_1 + 0x1c00) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x1c08) = *(undefined8 *)(puVar23 + 10);
  uVar18 = *(undefined8 *)(puVar23 + 0x10);
  uVar17 = *(undefined8 *)((long)puVar23 + 0x47);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  *(undefined8 *)(param_1 + 0x1c18) = *(undefined8 *)(puVar23 + 0xe);
  *(undefined8 *)(param_1 + 0x1c27) = uVar17;
  *(undefined8 *)(param_1 + 0x1c20) = uVar18;
  *(undefined8 *)(param_1 + 0x1c10) = uVar3;
  FUN_038fd1e0(param_1 + 0x1c30);
  FUN_038fd2f0(param_1 + 0x1c30,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 0x1c70) = *(undefined8 *)(puVar23 + 0x24);
  *(undefined4 *)(param_1 + 0x1c78) = uVar4;
  puVar2 = (uint *)(param_1 + 0x1cb4);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  puVar23 = *(undefined4 **)(lVar22 + 0x40);
  *(undefined4 *)(param_1 + 0x1cc8) = *puVar23;
  *(undefined4 *)(param_1 + 0x1ccc) = puVar23[1];
  *(undefined8 *)(param_1 + 0x1cd0) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 0x1cd8) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x1ce0) = puVar23[6];
  *(undefined4 *)(param_1 + 0x1ce4) = puVar23[7];
  *(undefined8 *)(param_1 + 0x1ce8) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x1cf0) = *(undefined8 *)(puVar23 + 10);
  uVar18 = *(undefined8 *)(puVar23 + 0x10);
  uVar17 = *(undefined8 *)((long)puVar23 + 0x47);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  *(undefined8 *)(param_1 + 0x1d00) = *(undefined8 *)(puVar23 + 0xe);
  *(undefined8 *)(param_1 + 0x1d0f) = uVar17;
  *(undefined8 *)(param_1 + 0x1d08) = uVar18;
  *(undefined8 *)(param_1 + 0x1cf8) = uVar3;
  FUN_038fd1e0(param_1 + 0x1d18);
  FUN_038fd2f0(param_1 + 0x1d18,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 0x1d58) = *(undefined8 *)(puVar23 + 0x24);
  *(undefined4 *)(param_1 + 0x1d60) = uVar4;
  puVar2 = (uint *)(param_1 + 0x1d9c);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  puVar23 = *(undefined4 **)(lVar22 + 0x40);
  *(undefined4 *)(param_1 + 0x1db0) = *puVar23;
  *(undefined4 *)(param_1 + 0x1db4) = puVar23[1];
  *(undefined8 *)(param_1 + 0x1db8) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 0x1dc0) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x1dc8) = puVar23[6];
  *(undefined4 *)(param_1 + 0x1dcc) = puVar23[7];
  *(undefined8 *)(param_1 + 0x1dd0) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x1dd8) = *(undefined8 *)(puVar23 + 10);
  uVar18 = *(undefined8 *)(puVar23 + 0x10);
  uVar17 = *(undefined8 *)((long)puVar23 + 0x47);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  *(undefined8 *)(param_1 + 0x1de8) = *(undefined8 *)(puVar23 + 0xe);
  *(undefined8 *)(param_1 + 0x1df7) = uVar17;
  *(undefined8 *)(param_1 + 0x1df0) = uVar18;
  *(undefined8 *)(param_1 + 0x1de0) = uVar3;
  FUN_038fd1e0(param_1 + 0x1e00);
  FUN_038fd2f0(param_1 + 0x1e00,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 0x1e40) = *(undefined8 *)(puVar23 + 0x24);
  *(undefined4 *)(param_1 + 0x1e48) = uVar4;
  puVar2 = (uint *)(param_1 + 0x1e84);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  puVar23 = *(undefined4 **)(lVar22 + 0x40);
  *(undefined4 *)(param_1 + 0x1e98) = *puVar23;
  *(undefined4 *)(param_1 + 0x1e9c) = puVar23[1];
  *(undefined8 *)(param_1 + 0x1ea0) = *(undefined8 *)(puVar23 + 2);
  *(undefined8 *)(param_1 + 0x1ea8) = *(undefined8 *)(puVar23 + 4);
  *(undefined4 *)(param_1 + 0x1eb0) = puVar23[6];
  *(undefined4 *)(param_1 + 0x1eb4) = puVar23[7];
  *(undefined8 *)(param_1 + 0x1eb8) = *(undefined8 *)(puVar23 + 8);
  *(undefined8 *)(param_1 + 0x1ec0) = *(undefined8 *)(puVar23 + 10);
  uVar18 = *(undefined8 *)(puVar23 + 0x10);
  uVar17 = *(undefined8 *)((long)puVar23 + 0x47);
  uVar3 = *(undefined8 *)(puVar23 + 0xc);
  *(undefined8 *)(param_1 + 0x1ed0) = *(undefined8 *)(puVar23 + 0xe);
  *(undefined8 *)(param_1 + 0x1edf) = uVar17;
  *(undefined8 *)(param_1 + 0x1ed8) = uVar18;
  *(undefined8 *)(param_1 + 0x1ec8) = uVar3;
  FUN_038fd1e0(param_1 + 0x1ee8);
  FUN_038fd2f0(param_1 + 0x1ee8,puVar23 + 0x14);
  uVar4 = puVar23[0x26];
  *(undefined8 *)(param_1 + 0x1f28) = *(undefined8 *)(puVar23 + 0x24);
  *(undefined4 *)(param_1 + 0x1f30) = uVar4;
  puVar2 = (uint *)(param_1 + 0x1f6c);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar6 = *(byte *)(param_1 + 0x10f8);
  lVar22 = param_1 + 0x10c0;
  uVar7 = *(ushort *)(param_1 + 0x10fa);
  uVar15 = *(byte *)(param_1 + 0x10f9) + 1;
  iVar5 = *(int *)(param_1 + 0x10f0);
  uVar10 = 0;
  if (bVar6 != 0) {
    uVar10 = uVar15 / bVar6;
  }
  uVar15 = uVar15 - uVar10 * bVar6;
  *(char *)(param_1 + 0x10f9) = (char)uVar15;
  iVar12 = (**(code **)(*(long *)(param_1 + 0x10c0) + 0x20))(lVar22);
  iVar13 = (**(code **)(*(long *)(param_1 + 0x10c0) + 0x20))(lVar22);
  iVar14 = *(int *)(param_1 + 0x10d8);
  lVar16 = 0;
  if (*(long *)(param_1 + 0x10e0) != 0) {
    lVar16 = (*DAT_04c61fd0)();
  }
  lVar16 = lVar16 + (ulong)(iVar14 + (uint)uVar7 * (uVar15 & 0xffff) *
                                     ((iVar5 + iVar12) - 1U & -iVar13));
  *(long *)(param_1 + 0x10d0) = lVar16;
  (**(code **)(*(long *)(param_1 + 0x10c0) + 0x20))(lVar22);
  (**(code **)(*(long *)(param_1 + 0x10c0) + 0x20))(lVar22);
  lVar24 = **(long **)(param_1 + 0x10c8);
  bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar24 + 8) * 4];
  (**(code **)(*(long *)(param_1 + 0x10c0) + 0x18))(lVar22);
  if (bVar6 != 0) {
    puVar23 = (undefined4 *)(param_1 + 0xdc8);
    uVar19 = (ulong)bVar6 & 3;
    lVar16 = lVar16 + (ulong)*(ushort *)(lVar24 + 4);
    if (bVar6 < 4) {
      uVar20 = 0;
    }
    else {
      uVar20 = 0;
      do {
        uVar21 = uVar20 * 4;
        uVar20 = uVar20 + 4;
        *(undefined4 *)(lVar16 + uVar21) = *puVar23;
        *(undefined4 *)(lVar16 + (uVar21 | 4)) = puVar23[1];
        *(undefined4 *)(lVar16 + (uVar21 | 8)) = puVar23[2];
        puVar1 = puVar23 + 3;
        puVar23 = puVar23 + 4;
        *(undefined4 *)(lVar16 + (uVar21 | 0xc)) = *puVar1;
      } while (((ulong)bVar6 & 0xfc) != uVar20);
    }
    if ((bVar6 & 3) != 0) {
      do {
        uVar19 = uVar19 - 1;
        *(undefined4 *)(lVar16 + uVar20 * 4) = *puVar23;
        uVar20 = uVar20 + 1;
        puVar23 = puVar23 + 1;
      } while (uVar19 != 0);
    }
  }
  lVar16 = *(long *)(param_1 + 0x10d0);
  local_70 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x13f0));
  local_70 = local_70 / 255.0;
  fStack_6c = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x13f1));
  local_68 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x13f2));
  fStack_6c = fStack_6c / 255.0;
  fStack_64 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x13f3));
  local_68 = local_68 / 255.0;
  fStack_64 = fStack_64 / 255.0;
  (**(code **)(*(long *)(param_1 + 0x10c0) + 0x20))(lVar22);
  (**(code **)(*(long *)(param_1 + 0x10c0) + 0x20))(lVar22);
  lVar24 = **(long **)(param_1 + 0x10c8);
  bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar24 + 0x14) * 4];
  (**(code **)(*(long *)(param_1 + 0x10c0) + 0x18))(lVar22);
  if ((ulong)bVar6 != 0) {
    memcpy((void *)(lVar16 + (ulong)*(ushort *)(lVar24 + 0x10)),&local_70,(ulong)bVar6 << 2);
  }
  bVar6 = *(byte *)(param_1 + 0x10f9);
  uVar7 = *(ushort *)(param_1 + 0x10fa);
  iVar5 = *(int *)(param_1 + 0x10f0);
  iVar14 = (**(code **)(*(long *)(param_1 + 0x10c0) + 0x20))(lVar22);
  iVar12 = (**(code **)(*(long *)(param_1 + 0x10c0) + 0x20))(lVar22);
  lVar22 = *(long *)(param_1 + 0x10e0);
  if (lVar22 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x10f0);
    iVar13 = *(int *)(param_1 + 0x10d8);
    uVar15 = (**(code **)PTR_DAT_04bcf030)(lVar22);
    if ((uVar15 >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x039d078c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_04c61fd8)(lVar22,iVar13 + (uint)uVar7 * (uint)bVar6 * ((iVar5 + iVar14) - 1U & -iVar12),
                      uVar4);
      return;
    }
  }
  return;
}

