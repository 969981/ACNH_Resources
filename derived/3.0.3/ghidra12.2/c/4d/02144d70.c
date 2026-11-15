
void FUN_02144d70(long param_1,ushort *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *local_58;
  uint local_50;
  uint uStack_4c;
  undefined *local_48;
  byte local_40;
  uint local_34;
  
  local_50 = (uint)*param_2;
  uStack_4c = (uint)param_2[1];
  local_48 = PTR_DAT_04bb5ba0 + 0x10;
  local_40 = 0;
  local_58 = PTR_DAT_04bb2010 + 0x10;
  if ((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) {
    FUN_00974bc8(*(long *)(DAT_04cfae30 + 0xa8),&local_58,&local_48);
    bVar3 = local_40;
    if ((local_40 >> 4 & 1) == 0) {
      if ((local_40 >> 5 & 1) == 0) {
        if ((local_40 >> 6 & 1) == 0) {
          return;
        }
        FUN_035a71c0(*(undefined8 *)(param_1 + 8),param_2,0);
        uVar5 = 5;
        *(byte *)((long)param_2 + 5) = *(byte *)((long)param_2 + 5) | 0x2a;
        uVar2 = 2;
      }
      else {
        FUN_035a71c0(*(undefined8 *)(param_1 + 8),param_2,1);
        uVar2 = 1;
        uVar5 = 7;
        *(byte *)((long)param_2 + 5) = *(byte *)((long)param_2 + 5) | 0x89;
      }
      *(undefined1 *)(param_2 + 0x10) = uVar2;
    }
    else {
      local_34 = 0;
      puVar1 = (undefined8 *)(param_1 + 8);
      *(undefined1 *)(param_2 + 0x10) = 0;
      uVar4 = (local_40 & 6 | (local_40 & 1) << 3 | local_40 >> 3 & 1) ^ 0xf;
      *(char *)((long)param_2 + 5) = (char)uVar4;
      if ((local_40 >> 3 & 1) == 0) {
        FUN_035a70c8(*puVar1,param_2,0);
        uVar4 = *(byte *)((long)param_2 + 5) | 0xffffff91;
        *(char *)((long)param_2 + 5) = (char)uVar4;
        if ((char)param_2[3] != '\x03') {
          local_34 = (uint)(byte)param_2[0x10];
          if (local_34 == 0) {
            FUN_035a79b0(*puVar1,param_2,0);
            *(byte *)(param_2 + 2) = (byte)param_2[2] & 0x6e;
          }
          else {
            FUN_035a72e0(*puVar1,param_2,local_34 == 1);
          }
          uVar4 = (uint)*(byte *)((long)param_2 + 5);
        }
      }
      if ((uVar4 >> 1 & 1) != 0) {
        FUN_035a70c8(*puVar1,param_2,1);
        if ((char)param_2[3] != '\x03') {
          local_34 = (uint)(byte)param_2[0x10];
          if (local_34 == 0) {
            FUN_035a79b0(*puVar1,param_2,1);
            *(byte *)(param_2 + 2) = (byte)param_2[2] & 0x9d;
          }
          else {
            FUN_035a72e0(*puVar1,param_2,local_34 == 1);
          }
        }
        uVar4 = (uint)*(byte *)((long)param_2 + 5);
      }
      if ((uVar4 >> 2 & 1) != 0) {
        FUN_035a70c8(*puVar1,param_2,2);
        uVar4 = *(byte *)((long)param_2 + 5) | 0x54;
        *(char *)((long)param_2 + 5) = (char)uVar4;
        if ((char)param_2[3] != '\x03') {
          local_34 = (uint)(byte)param_2[0x10];
          if (local_34 == 0) {
            FUN_035a79b0(*puVar1,param_2,2);
            *(byte *)(param_2 + 2) = (byte)param_2[2] & 0xab;
          }
          else {
            FUN_035a72e0(*puVar1,param_2,local_34 == 1);
          }
          uVar4 = (uint)*(byte *)((long)param_2 + 5);
        }
      }
      if ((uVar4 >> 3 & 1) == 0) {
        return;
      }
      uVar5 = 3;
      FUN_035a70c8(*puVar1,param_2,3);
    }
    if ((char)param_2[3] != '\x03') {
      local_34 = (uint)(byte)param_2[0x10];
      if (local_34 == 0) {
        FUN_035a79b0(*(undefined8 *)(param_1 + 8),param_2,uVar5);
        if ((bVar3 >> 4 & 1) != 0) {
          *(byte *)(param_2 + 2) = (byte)param_2[2] & 0x57;
        }
      }
      else {
        FUN_035a72e0(*(undefined8 *)(param_1 + 8),param_2,local_34 == 1);
      }
    }
  }
  return;
}

