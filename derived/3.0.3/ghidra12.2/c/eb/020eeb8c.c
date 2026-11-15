
void FUN_020eeb8c(undefined2 *param_1,ushort *param_2,undefined1 param_3,undefined1 param_4,
                 byte param_5)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined2 local_58;
  undefined1 local_56;
  byte local_55;
  undefined1 local_54;
  undefined4 local_52;
  undefined2 local_4e;
  byte local_4c;
  uint local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  local_52 = 0;
  local_4e = 0xffff;
  local_5c = *param_1;
  local_4c = 0;
  local_5a = *(undefined1 *)(param_1 + 1);
  local_55 = 0;
  if (*(byte *)((long)param_1 + 7) < 3) {
    local_55 = *(byte *)((long)param_1 + 7);
  }
  local_58 = param_1[2];
  local_56 = *(undefined1 *)(param_1 + 3);
  local_48 = 0;
  if (*(byte *)(param_1 + 4) < 3) {
    local_48 = (uint)*(byte *)(param_1 + 4);
  }
  local_54 = (undefined1)local_48;
  uVar3 = nn::time::IsValidDate
                    ((uint)*param_2,(uint)(byte)param_2[1],(uint)*(byte *)((long)param_2 + 3));
  if ((uVar3 & 1) == 0) {
    local_52 = 0;
  }
  else {
    uVar3 = nn::time::IsValidDate
                      ((uint)*param_2,(uint)(byte)param_2[1],(uint)*(byte *)((long)param_2 + 3));
    uVar4 = (uint)*param_2;
    if ((uVar3 & 1) == 0) {
      uVar4 = 2000;
    }
    uVar3 = nn::time::IsValidDate
                      ((uint)*param_2,(uint)(byte)param_2[1],(uint)*(byte *)((long)param_2 + 3));
    uVar1 = (uint)(byte)param_2[1];
    if ((uVar3 & 1) == 0) {
      uVar1 = 1;
    }
    uVar3 = nn::time::IsValidDate
                      ((uint)*param_2,(uint)(byte)param_2[1],(uint)*(byte *)((long)param_2 + 3));
    bVar2 = *(byte *)((long)param_2 + 3);
    if ((uVar3 & 1) == 0) {
      bVar2 = 1;
    }
    uVar3 = nn::time::IsValidDate(uVar4,uVar1,(uint)bVar2);
    if ((uVar3 & 1) != 0) {
      local_52 = CONCAT13(bVar2,CONCAT12((char)uVar1,(short)uVar4));
    }
  }
  local_4c = param_5 & 1;
  local_4e = CONCAT11(param_4,param_3);
  local_48 = 0;
  local_42 = 0;
  local_44 = 0xff00;
  if (-1 < DAT_053d0e60) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e60,&local_48,&local_5c,0x12,0);
  }
  return;
}

