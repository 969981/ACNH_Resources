
void FUN_0347170c(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *local_58;
  undefined1 *puStack_50;
  undefined4 local_48;
  undefined1 local_44 [31];
  undefined1 local_25;
  undefined1 uStack_1;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x210) + 0x578);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x2a8), lVar2 != 0)) {
    local_25 = 0;
    local_48 = 0x20;
    puStack_50 = local_44;
    local_44[0] = 0;
    local_58 = PTR_DAT_04bb2028 + 0x10;
    FUN_034717c0(&local_58,1,10,param_2 & 1);
    if ((*(long *)(*(long *)(lVar2 + 0x48) + 8) != 0) &&
       (uVar1 = FUN_03d52ee0(&uStack_1,&DAT_0575c870,&local_58), (uVar1 & 1) != 0)) {
      FUN_03c7f3c0(*(undefined8 *)(lVar2 + 0x48),&DAT_0575c870,&local_58,0);
      FUN_03d7dd80(lVar2);
    }
  }
  return;
}

