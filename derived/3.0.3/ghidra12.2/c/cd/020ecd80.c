
void FUN_020ecd80(undefined1 param_1,byte *param_2,ushort *param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined1 local_28;
  byte local_27;
  ushort local_26;
  byte local_24;
  undefined1 local_23;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  local_27 = *param_2;
  if (7 < local_27) {
    local_27 = 0xff;
  }
  local_28 = param_1;
  uVar1 = nn::time::IsValidDate
                    ((uint)*param_3,(uint)(byte)param_3[1],(uint)*(byte *)((long)param_3 + 3));
  local_26 = *param_3;
  uVar2 = (uint)local_26;
  if ((uVar1 & 1) == 0) {
    local_26 = 2000;
  }
  uVar1 = nn::time::IsValidDate(uVar2,(uint)(byte)param_3[1],(uint)*(byte *)((long)param_3 + 3));
  local_24 = (byte)param_3[1];
  uVar2 = (uint)local_24;
  if ((uVar1 & 1) == 0) {
    local_24 = 1;
  }
  uVar1 = nn::time::IsValidDate((uint)*param_3,uVar2,(uint)*(byte *)((long)param_3 + 3));
  local_23 = *(undefined1 *)((long)param_3 + 3);
  local_8 = 0;
  local_2 = 0;
  if ((uVar1 & 1) == 0) {
    local_23 = 1;
  }
  local_4 = 0xff00;
  if (-1 < DAT_053d0b00) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0b00,&local_8,&local_28,6,0);
  }
  return;
}

