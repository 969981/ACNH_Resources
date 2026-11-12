
void FUN_0095b8c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  MutexType *pMVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *local_60;
  char *pcStack_58;
  
  puVar1 = PTR_DAT_04bb2110;
  *(undefined1 *)(param_1 + 0x4b9) = 1;
  puVar3 = PTR_DAT_04bb2020;
  if (*(int *)(*(long *)puVar1 + 8) == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = (long *)**(undefined8 **)(*(long *)puVar1 + 0x10);
  }
  if (*(long *)(param_1 + 0x4e0) != 0) goto LAB_0095bcfc;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = &DAT_0409138c;
  plVar6 = (long *)FUN_038c6d48(0x9f0,&local_60,0,8,1,0);
  *(long **)(param_1 + 0x4e0) = plVar6;
  lVar9 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar8 = malloc(0x5f8);
joined_r0x0095c2c4:
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar8 + 2) = 0;
      puVar1 = PTR_DAT_04bdf0c8;
      *(undefined4 *)((long)puVar8 + 0x24) = 0;
      *puVar8 = 0x13;
      puVar8[1] = 0;
      puVar2 = PTR_DAT_04bdf1d8;
      *(undefined1 *)(puVar8 + 4) = 1;
      puVar1 = puVar1 + 0x10;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar2 = puVar2 + 0x10;
      puVar8[3] = puVar1;
      puVar8[9] = 0;
      *(undefined4 *)(puVar8 + 10) = 0xffffffff;
      puVar8[0xb] = 0;
      *(undefined1 *)(puVar8 + 0xc) = 0;
      puVar8[0xd] = puVar1;
      *(undefined1 *)(puVar8 + 0xe) = 1;
      *(undefined4 *)((long)puVar8 + 0x74) = 0;
      puVar8[0x11] = 0;
      *(undefined4 *)(puVar8 + 0x14) = 0xffffffff;
      puVar8[0x15] = 0;
      *(undefined1 *)(puVar8 + 0x16) = 0;
      puVar8[0x17] = puVar1;
      *(undefined1 *)(puVar8 + 0x18) = 1;
      *(undefined4 *)((long)puVar8 + 0xc4) = 0;
      puVar8[0x1d] = 0;
      *(undefined4 *)(puVar8 + 0x1e) = 0xffffffff;
      puVar8[0x1f] = 0;
      *(undefined1 *)(puVar8 + 0x20) = 0;
      puVar8[0x21] = puVar1;
      *(undefined1 *)(puVar8 + 0x22) = 1;
      *(undefined4 *)((long)puVar8 + 0x114) = 0;
      puVar8[0x25] = 0;
      *(undefined4 *)(puVar8 + 0x28) = 0xffffffff;
      puVar8[0x29] = 0;
      *(undefined1 *)(puVar8 + 0x2a) = 0;
      puVar8[0x2b] = puVar1;
      *(undefined1 *)(puVar8 + 0x2c) = 1;
      *(undefined4 *)((long)puVar8 + 0x164) = 0;
      puVar8[0x31] = 0;
      *(undefined4 *)(puVar8 + 0x32) = 0xffffffff;
      puVar8[0x33] = 0;
      *(undefined1 *)(puVar8 + 0x34) = 0;
      puVar8[0x35] = puVar1;
      *(undefined1 *)(puVar8 + 0x36) = 1;
      *(undefined4 *)((long)puVar8 + 0x1b4) = 0;
      puVar8[0x39] = 0;
      *(undefined4 *)(puVar8 + 0x3c) = 0xffffffff;
      puVar8[0x3d] = 0;
      *(undefined1 *)(puVar8 + 0x3e) = 0;
      puVar8[0x3f] = puVar1;
      *(undefined1 *)(puVar8 + 0x40) = 1;
      *(undefined4 *)((long)puVar8 + 0x204) = 0;
      puVar8[0x41] = 0;
      puVar8[0x42] = puVar2;
      puVar8[0x45] = 0;
      puVar8[0x44] = 0;
      puVar8[0x43] = 0;
      *(undefined4 *)(puVar8 + 0x46) = 0xffffffff;
      puVar8[0x47] = 0;
      *(undefined1 *)(puVar8 + 0x48) = 0;
      puVar8[0x49] = puVar1;
      *(undefined1 *)(puVar8 + 0x4a) = 1;
      *(undefined4 *)((long)puVar8 + 0x254) = 0;
      puVar8[0x4b] = 0;
      puVar8[0x4c] = puVar2;
      puVar8[0x4f] = 0;
      puVar8[0x4e] = 0;
      puVar8[0x4d] = 0;
      *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
      puVar8[0x51] = 0;
      *(undefined1 *)(puVar8 + 0x52) = 0;
      puVar8[0x53] = puVar1;
      *(undefined1 *)(puVar8 + 0x54) = 1;
      *(undefined4 *)((long)puVar8 + 0x2a4) = 0;
      puVar8[0x55] = 0;
      puVar8[0x56] = puVar2;
      puVar8[0x59] = 0;
      puVar8[0x58] = 0;
      puVar8[0x57] = 0;
      *(undefined4 *)(puVar8 + 0x5a) = 0xffffffff;
      puVar8[0x5b] = 0;
      *(undefined1 *)(puVar8 + 0x5c) = 0;
      puVar8[0x5d] = puVar1;
      *(undefined1 *)(puVar8 + 0x5e) = 1;
      *(undefined4 *)((long)puVar8 + 0x2f4) = 0;
      puVar8[0x5f] = 0;
      puVar8[0x60] = puVar2;
      puVar8[99] = 0;
      puVar8[0x62] = 0;
      puVar8[0x61] = 0;
      *(undefined4 *)(puVar8 + 100) = 0xffffffff;
      puVar8[0x65] = 0;
      *(undefined1 *)(puVar8 + 0x66) = 0;
      puVar8[0x67] = puVar1;
      *(undefined1 *)(puVar8 + 0x68) = 1;
      *(undefined4 *)((long)puVar8 + 0x344) = 0;
      puVar8[0x69] = 0;
      puVar8[0x6a] = puVar2;
      puVar8[0x6d] = 0;
      puVar8[0x6c] = 0;
      puVar8[0x6b] = 0;
      *(undefined4 *)(puVar8 + 0x6e) = 0xffffffff;
      puVar8[0x6f] = 0;
      *(undefined1 *)(puVar8 + 0x70) = 0;
      puVar8[0x71] = puVar1;
      *(undefined1 *)(puVar8 + 0x72) = 1;
      *(undefined4 *)((long)puVar8 + 0x394) = 0;
      puVar8[0x73] = 0;
      puVar8[0x74] = puVar2;
      puVar8[0x77] = 0;
      puVar8[0x76] = 0;
      puVar8[0x75] = 0;
      *(undefined4 *)(puVar8 + 0x78) = 0xffffffff;
      puVar8[0x79] = 0;
      *(undefined1 *)(puVar8 + 0x7a) = 0;
      puVar8[0x7b] = puVar1;
      *(undefined1 *)(puVar8 + 0x7c) = 1;
      *(undefined4 *)((long)puVar8 + 0x3e4) = 0;
      puVar8[0x7d] = 0;
      puVar8[0x7e] = puVar2;
      puVar8[0x81] = 0;
      puVar8[0x80] = 0;
      puVar8[0x7f] = 0;
      *(undefined4 *)(puVar8 + 0x82) = 0xffffffff;
      puVar8[0x83] = 0;
      *(undefined1 *)(puVar8 + 0x84) = 0;
      puVar8[0x85] = puVar1;
      *(undefined1 *)(puVar8 + 0x86) = 1;
      *(undefined4 *)((long)puVar8 + 0x434) = 0;
      puVar8[0x87] = 0;
      puVar8[0x88] = puVar2;
      puVar8[0x8b] = 0;
      puVar8[0x8a] = 0;
      puVar8[0x89] = 0;
      *(undefined4 *)(puVar8 + 0x8c) = 0xffffffff;
      puVar8[0x8d] = 0;
      *(undefined1 *)(puVar8 + 0x8e) = 0;
      puVar8[0x8f] = puVar1;
      *(undefined1 *)(puVar8 + 0x90) = 1;
      *(undefined4 *)((long)puVar8 + 0x484) = 0;
      puVar8[0x91] = 0;
      puVar8[0x92] = puVar2;
      puVar8[0x95] = 0;
      puVar8[0x94] = 0;
      puVar8[0x93] = 0;
      *(undefined4 *)(puVar8 + 0x96) = 0xffffffff;
      puVar8[0x97] = 0;
      *(undefined1 *)(puVar8 + 0x98) = 0;
      puVar8[0x99] = puVar1;
      *(undefined1 *)(puVar8 + 0x9a) = 1;
      *(undefined4 *)((long)puVar8 + 0x4d4) = 0;
      puVar8[0x9b] = 0;
      puVar8[0x9c] = puVar2;
      puVar8[0x9f] = 0;
      puVar8[0x9e] = 0;
      puVar8[0x9d] = 0;
      *(undefined4 *)(puVar8 + 0xa0) = 0xffffffff;
      puVar8[0xa1] = 0;
      *(undefined1 *)(puVar8 + 0xa2) = 0;
      puVar8[0xa3] = puVar1;
      *(undefined1 *)(puVar8 + 0xa4) = 1;
      *(undefined4 *)((long)puVar8 + 0x524) = 0;
      puVar8[0xa5] = 0;
      puVar8[0xa6] = puVar2;
      puVar8[0xa9] = 0;
      puVar8[0xa8] = 0;
      puVar8[0xa7] = 0;
      *(undefined4 *)(puVar8 + 0xaa) = 0xffffffff;
      puVar8[0xab] = 0;
      *(undefined1 *)(puVar8 + 0xac) = 0;
      puVar8[0xad] = puVar1;
      *(undefined1 *)(puVar8 + 0xae) = 1;
      *(undefined4 *)((long)puVar8 + 0x574) = 0;
      puVar8[0xaf] = 0;
      puVar8[0xb0] = puVar2;
      puVar8[0xb3] = 0;
      puVar8[0xb2] = 0;
      puVar8[0xb1] = 0;
      *(undefined4 *)(puVar8 + 0xb4) = 0xffffffff;
      puVar8[0xb5] = 0;
      *(undefined1 *)(puVar8 + 0xb6) = 0;
      puVar8[0xb7] = puVar1;
      *(undefined1 *)(puVar8 + 0xb8) = 1;
      *(undefined4 *)((long)puVar8 + 0x5c4) = 0;
      puVar8[0xb9] = 0;
      puVar8[0xba] = puVar2;
      puVar8[0xbd] = 0;
      puVar8[0xbc] = 0;
      puVar8[0xbb] = 0;
      *(undefined4 *)(puVar8 + 0xbe) = 0xffffffff;
      puVar8[5] = 0;
      puVar8[6] = puVar2;
      puVar8[0xf] = 0;
      puVar8[0x10] = puVar2;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[0x19] = 0;
      puVar8[0x1a] = puVar2;
      puVar8[0x1b] = 0;
      puVar8[0x1c] = 0;
      puVar8[0x23] = 0;
      puVar8[0x24] = puVar2;
      puVar8[0x26] = 0;
      puVar8[0x27] = 0;
      puVar8[0x2d] = 0;
      puVar8[0x2e] = puVar2;
      puVar8[0x2f] = 0;
      puVar8[0x30] = 0;
      puVar8[0x37] = 0;
      puVar8[0x38] = puVar2;
      puVar8[0x3a] = 0;
      puVar8[0x3b] = 0;
      *(undefined4 *)(param_1 + 0x4d0) = 0x13;
      *(undefined8 **)(param_1 + 0x4d8) = puVar8 + 1;
    }
  }
  else {
    if (plVar6 != (long *)0x0) {
LAB_0095b98c:
      puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x5f8,8);
      goto joined_r0x0095c2c4;
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar7 != 0) {
      plVar6 = (long *)(lVar7 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) goto LAB_0095b98c;
  }
  (**(code **)(**(long **)(param_1 + 0x4e0) + 0x28))();
LAB_0095bcfc:
  uVar11 = *(undefined8 *)(param_1 + 0x4d8);
  puVar3 = puVar3 + 0x10;
  pMVar4 = (MutexType *)(plVar10 + 0x4d);
  pcStack_58 = s_CommuneObjTrailerGarden_pbc_0492a428;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  puVar1 = PTR_PTR_04bb2238;
  (**(code **)(*plVar10 + 0x30))(plVar10,uVar11,&local_60,PTR_PTR_04bb2238);
  nn::os::UnlockMutex(pMVar4);
  uVar5 = *(uint *)(param_1 + 0x4d0);
  lVar9 = *(long *)(param_1 + 0x4d8);
  pcStack_58 = s_CommuneObjTrailerRemake_pbc_0492a446;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar9 + (ulong)(1 < uVar5) * 0x50,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 0xa0;
  if (*(uint *)(param_1 + 0x4d0) < 3) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjTrailerFortune_pbc_0492a464;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 0xf0;
  if (*(uint *)(param_1 + 0x4d0) < 4) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjTrailerTsunekichi_pbc_0492a483;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 0x140;
  if (*(uint *)(param_1 + 0x4d0) < 5) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjTrailerShoeshop_pbc_0492a4a5;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 400;
  if (*(uint *)(param_1 + 0x4d0) < 6) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjTrailerRagshop_pbc_0492a4c5;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 0x1e0;
  if (*(uint *)(param_1 + 0x4d0) < 7) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjStorage_pbc_0492a4e4;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 0x230;
  if (*(uint *)(param_1 + 0x4d0) < 8) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjDecoGarden01_pbc_0492a4fc;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 0x280;
  if (*(uint *)(param_1 + 0x4d0) < 9) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjDecoGarden02_pbc_0492a519;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 0x2d0;
  if (*(uint *)(param_1 + 0x4d0) < 10) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjDecoShoeshop01_pbc_0492a536;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 800;
  if (*(uint *)(param_1 + 0x4d0) < 0xb) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjDecoTsunekichi01_pbc_0492a555;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 0x370;
  if (*(uint *)(param_1 + 0x4d0) < 0xc) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjDecoRameake01_pbc_0492a576;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 0x3c0;
  if (*(uint *)(param_1 + 0x4d0) < 0xd) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjDecoRagshop01_pbc_0492a594;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 0x410;
  if (*(uint *)(param_1 + 0x4d0) < 0xe) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjDecoFortune01_pbc_0492a5b2;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 0x460;
  if (*(uint *)(param_1 + 0x4d0) < 0xf) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjDecoTsunekichi02_pbc_0492a5d0;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 0x4b0;
  if (*(uint *)(param_1 + 0x4d0) < 0x10) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjDecoStorage01_pbc_0492a5f1;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 0x500;
  if (*(uint *)(param_1 + 0x4d0) < 0x11) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjGate01_pbc_0492a60f;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 0x550;
  if (*(uint *)(param_1 + 0x4d0) < 0x12) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjSignCut_pbc_0492a626;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  lVar7 = *(long *)(param_1 + 0x4d8);
  lVar9 = 0x5a0;
  if (*(uint *)(param_1 + 0x4d0) < 0x13) {
    lVar9 = 0;
  }
  pcStack_58 = s_CommuneObjRugCut_pbc_0492a63e;
  local_60 = puVar3;
  nn::os::LockMutex(pMVar4);
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar7 + lVar9,&local_60,puVar1);
  nn::os::UnlockMutex(pMVar4);
  return;
}

