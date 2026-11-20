
/* WARNING: Removing unreachable block (ram,0x03d4ca9c) */

void FUN_03d4ca24(long param_1,long param_2,int param_3,undefined4 *param_4,byte param_5)

{
  uint uVar1;
  long lVar2;
  long local_60;
  long *plStack_58;
  int local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  byte local_40;
  long local_38;
  
  if ((-1 < *(int *)(param_1 + 0x24)) || (*(int *)(param_1 + 0x24) == -3)) {
    local_4c = *param_4;
    uStack_48 = param_4[1];
    plStack_58 = (long *)0x0;
    if (param_2 != 0) {
      plStack_58 = &local_38;
    }
    local_40 = param_5 & 1;
    local_44 = 0;
    local_60 = param_1;
    local_50 = param_3;
    local_38 = param_2;
    (*(code *)**(undefined8 **)(param_1 + 0x68))((undefined8 *)(param_1 + 0x68),1,&local_60);
    if (param_3 == 0) {
      uVar1 = *(uint *)(param_1 + 0x20);
      if (*(uint *)(param_2 + 8) <= uVar1) {
        uVar1 = 0;
      }
      lVar2 = *(long *)(param_2 + 0x10) + (long)(int)uVar1 * 0x48;
      *(uint *)(lVar2 + 0x3c) = *(uint *)(lVar2 + 0x3c) | *(uint *)(param_1 + 0x16c);
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return;
}

