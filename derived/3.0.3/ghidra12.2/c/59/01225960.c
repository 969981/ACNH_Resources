
uint FUN_01225960(undefined4 param_1,float param_2,undefined1 param_3 [16],float param_4,
                 long param_5,long param_6,undefined8 param_7,undefined8 *param_8)

{
  MutexType *pMVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **local_78;
  uint local_70;
  uint local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  
  FUN_012257c0(&local_68,param_7);
  pMVar1 = (MutexType *)(param_5 + 0x238);
  nn::os::LockMutex(pMVar1);
  lVar2 = param_5 + 600;
  uVar7 = 0;
  pbVar5 = (byte *)(param_5 + 0x2b0);
  do {
    if ((*(long *)(pbVar5 + -8) == param_6) && ((*pbVar5 >> 3 & 1) == 0)) goto LAB_01225a3c;
    uVar7 = uVar7 + 1;
    pbVar5 = pbVar5 + 0x60;
  } while (uVar7 != 0x50);
  uVar7 = 0;
  lVar6 = lVar2;
  do {
    if (*(long *)(lVar6 + 0x50) == 0) {
LAB_01225a38:
      *(long *)(lVar6 + 0x50) = param_6;
LAB_01225a3c:
      nn::os::UnlockMutex(pMVar1);
      if (0x4f < uVar7) {
        return 0xffffffff;
      }
      puVar8 = (undefined8 *)(lVar2 + (ulong)uVar7 * 0x60);
      uVar3 = FUN_0277d7b4(puVar8 + 6,&local_68);
      if ((uVar3 & 1) == 0) {
        *(undefined2 *)(puVar8 + 6) = local_68;
        lVar6 = lVar2 + (ulong)uVar7 * 0x60;
        *(undefined2 *)(lVar6 + 0x32) = local_66;
        *(undefined4 *)(lVar6 + 0x34) = local_64;
        bVar4 = *(byte *)(lVar6 + 0x58) | 2;
      }
      else {
        lVar6 = lVar2 + (ulong)uVar7 * 0x60;
        bVar4 = *(byte *)(lVar6 + 0x58) | 1;
      }
      *(byte *)(lVar6 + 0x58) = bVar4;
      uVar10 = *param_8;
      lVar6 = lVar2 + (ulong)uVar7 * 0x60;
      puVar8[1] = param_8[1];
      *puVar8 = uVar10;
      uVar10 = param_8[2];
      puVar8[3] = param_8[3];
      puVar8[2] = uVar10;
      uVar11 = param_8[5];
      uVar10 = param_8[4];
      *(byte *)(lVar6 + 0x58) = bVar4 | 4;
      *(undefined4 *)(lVar6 + 0x44) = param_1;
      *(undefined4 *)(lVar6 + 0x48) = 0;
      *(undefined8 *)(lVar6 + 0x38) = 0;
      *(undefined4 *)(lVar6 + 0x40) = 0;
      puVar8[5] = uVar11;
      puVar8[4] = uVar10;
      local_70 = (int)((float)(int)param_2 / 5.0) - (uint)(param_2 < 0.0);
      local_6c = (int)((float)(int)param_4 / 5.0) - (uint)(param_4 < 0.0);
      local_78 = &PTR_FUN_04986b58;
      if ((local_70 & 1) != 0) {
        local_70 = local_70 - 1;
      }
      if ((local_6c & 1) != 0) {
        local_6c = local_6c - 1;
      }
      uVar9 = FUN_01224d80(param_5,&local_78);
      *(undefined4 *)(lVar2 + (ulong)uVar7 * 0x60 + 0x4c) = uVar9;
      return uVar7;
    }
    if (*(long *)(lVar6 + 0xb0) == 0) {
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x60;
      goto LAB_01225a38;
    }
    uVar7 = uVar7 + 2;
    lVar6 = lVar6 + 0xc0;
    if (uVar7 == 0x50) {
      nn::os::UnlockMutex(pMVar1);
      return 0xffffffff;
    }
  } while( true );
}

