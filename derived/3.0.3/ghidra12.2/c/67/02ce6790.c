
void FUN_02ce6790(long *param_1)

{
  uint uVar1;
  void *__dest;
  long lVar2;
  long lVar3;
  undefined **local_ef8;
  undefined1 auStack_ef0 [1876];
  uint local_79c;
  uint local_798;
  uint local_794;
  int local_790;
  uint local_784 [469];
  
  FUN_02686600(&local_ef8);
  memcpy(param_1 + 1,auStack_ef0,0x754);
  lVar3 = DAT_05ab5ea8;
  if (DAT_05ab5ea8 != 0) {
    local_ef8 = &PTR_LAB_049ff3a8;
    uVar1 = nn::os::GetSystemTick();
    local_79c = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
    local_798 = (local_79c ^ local_79c >> 0x1e) * 0x6c078965 + 2;
    local_794 = (local_798 ^ local_798 >> 0x1e) * 0x6c078965 + 3;
    local_790 = (local_794 ^ local_794 >> 0x1e) * 0x6c078965 + 4;
    memcpy(auStack_ef0,(void *)(lVar3 + 0x3b8),0x754);
    __dest = (void *)(**(code **)(*param_1 + 0x18))(param_1);
    lVar2 = FUN_01a45204(&local_ef8);
    for (lVar3 = 0;
        *(uint *)((long)local_784 + lVar3) =
             *(uint *)(lVar2 + lVar3) | *(uint *)((long)__dest + lVar3), lVar3 != 0x750;
        lVar3 = lVar3 + 8) {
      *(uint *)((long)local_784 + lVar3 + 4) =
           *(uint *)(lVar2 + lVar3 + 4) | *(uint *)((long)__dest + lVar3 + 4);
    }
    memcpy(__dest,local_784,0x754);
    *(uint *)((long)__dest + 0x750) = *(uint *)((long)__dest + 0x750) & 0xffffff;
  }
  return;
}

