
uint FUN_039d57a8(long param_1,long *param_2,int param_3,char *param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_1,param_3,param_5);
  if ((uVar2 & 1) != 0) {
    if (*param_4 != '\0') {
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_4 + 4);
      uVar1 = *(uint *)(param_2 + 0x46) & 0xfffffffc | (uint)(byte)param_4[8];
      *(uint *)(param_2 + 0x46) = uVar1;
      uVar1 = uVar1 & 0xfffffff3 | (uint)(byte)param_4[9] << 2;
      *(uint *)(param_2 + 0x46) = uVar1;
      uVar1 = uVar1 & 0xffffffcf | (uint)(byte)param_4[10] << 4;
      *(uint *)(param_2 + 0x46) = uVar1;
      uVar1 = uVar1 & 0xffffff3f | (uint)(byte)param_4[0xb] << 6;
      *(uint *)(param_2 + 0x46) = uVar1;
      uVar1 = uVar1 & 0xfffffcff | (uint)(byte)param_4[0xc] << 8;
      *(uint *)(param_2 + 0x46) = uVar1;
      uVar1 = uVar1 & 0xfffff3ff | (uint)(byte)param_4[0xd] << 10;
      *(uint *)(param_2 + 0x46) = uVar1;
      uVar1 = uVar1 & 0xffffcfff | (uint)(byte)param_4[0xe] << 0xc;
      *(uint *)(param_2 + 0x46) = uVar1;
      *(uint *)(param_2 + 0x46) = uVar1 & 0xffff3fff | (uint)(byte)param_4[0xf] << 0xe;
      uVar1 = *(uint *)((long)param_2 + 0x234) & 0xfffffffc | (uint)(byte)param_4[0x10];
      *(uint *)((long)param_2 + 0x234) = uVar1;
      uVar1 = uVar1 & 0xfffffff3 | (uint)(byte)param_4[0x11] << 2;
      *(uint *)((long)param_2 + 0x234) = uVar1;
      uVar1 = uVar1 & 0xffffffcf | (uint)(byte)param_4[0x12] << 4;
      *(uint *)((long)param_2 + 0x234) = uVar1;
      uVar1 = uVar1 & 0xffffff3f | (uint)(byte)param_4[0x13] << 6;
      *(uint *)((long)param_2 + 0x234) = uVar1;
      uVar1 = uVar1 & 0xfffffcff | (uint)(byte)param_4[0x14] << 8;
      *(uint *)((long)param_2 + 0x234) = uVar1;
      uVar1 = uVar1 & 0xfffff3ff | (uint)(byte)param_4[0x15] << 10;
      *(uint *)((long)param_2 + 0x234) = uVar1;
      uVar1 = uVar1 & 0xffffcfff | (uint)(byte)param_4[0x16] << 0xc;
      *(uint *)((long)param_2 + 0x234) = uVar1;
      *(uint *)((long)param_2 + 0x234) = uVar1 & 0xffff3fff | (uint)(byte)param_4[0x17] << 0xe;
    }
    *(long **)(*(long *)(param_1 + 0x168) + (long)param_3 * 8) = param_2;
  }
  return uVar2 & 1;
}

