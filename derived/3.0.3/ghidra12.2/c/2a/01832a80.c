
void FUN_01832a80(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined4 local_24;
  
  fVar6 = *(float *)(*(long *)(param_1 + 0x300) + 0x278);
  fVar7 = *(float *)(*(long *)(param_1 + 0x300) + 0x280);
  iVar1 = (-*(int *)(param_1 + 0x550) - (uint)(fVar6 < 0.0)) + (int)((float)(int)fVar6 / 10.0);
  iVar2 = (-*(int *)(param_1 + 0x554) - (uint)(fVar7 < 0.0)) + (int)((float)(int)fVar7 / 10.0);
  if (DAT_04102a3c == iVar1 && DAT_04101dac == iVar2) {
    uVar5 = 1;
  }
  else if (DAT_041023ec == iVar1 && DAT_041029cc == iVar2) {
    uVar5 = 2;
  }
  else {
    uVar5 = 3;
    if (DAT_041027ec != iVar1 || DAT_04102a3c != iVar2) {
      if (DAT_0410217c == iVar1 && DAT_041023ec == iVar2) {
        uVar5 = 4;
      }
      else if (DAT_0410234c == iVar1 && DAT_041027ec == iVar2) {
        uVar5 = 5;
      }
      else if (DAT_0410227c == iVar1 && DAT_0410217c == iVar2) {
        uVar5 = 6;
      }
      else {
        local_48 = 0;
        local_24 = 3;
        uVar5 = 7;
        FUN_006f6a70(auStack_50,&local_24,1,7);
        if ((int)local_48 != iVar1 || local_48._4_4_ != iVar2) {
          local_48 = 0;
          local_24 = 3;
          uVar5 = 8;
          FUN_006f6a70(auStack_50,&local_24,1,8);
          if ((int)local_48 != iVar1 || local_48._4_4_ != iVar2) {
            *(undefined1 *)(param_1 + 0x58c) = 0;
            *(undefined4 *)(param_1 + 0x588) = 8;
            *(undefined8 *)(param_1 + 0x580) = 0x100000001;
            return;
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x580) = uVar5;
  uVar3 = *(uint *)(param_1 + 1000);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x3ec);
  uVar5 = *(undefined4 *)(param_1 + 0x3f0);
  uVar4 = *(uint *)(param_1 + 0x3f4);
  uVar3 = uVar3 ^ uVar3 << 0xb;
  *(uint *)(param_1 + 0x3f0) = uVar4;
  *(undefined4 *)(param_1 + 0x3ec) = uVar5;
  uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
  *(uint *)(param_1 + 0x3f4) = uVar3;
  *(bool *)(param_1 + 0x58c) = (uVar3 & 1) == 0;
  *(undefined8 *)(param_1 + 0x584) = 0x800000001;
  return;
}

