
void FUN_01e5de70(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 auStack_46 [10];
  undefined1 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if (*(long *)(param_1 + 0x5b0) != 0) {
    lVar2 = *(long *)(param_1 + 0x358);
    if ((*(int *)(lVar2 + 0x500) != 0) || (*(int *)(lVar2 + 0x508) < 0)) {
      FUN_0218a1d0(*(undefined8 *)PTR_DAT_04bb46e8,lVar2 + 0x3e0,param_2);
      lVar2 = *(long *)(param_1 + 0x358);
    }
    uVar3 = FUN_01e3e21c(lVar2);
    if ((uVar3 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x358);
      local_48 = (undefined2)*(undefined4 *)(lVar5 + 0x508);
      local_3c = 1;
      local_50 = *param_2;
      (**(code **)(*(long *)(lVar5 + 0x3e0) + 0x18))(lVar5 + 0x3e0);
      lVar2 = 0;
      do {
        if (*(char *)(*(long *)(lVar5 + 1000) + lVar2) == '\0') goto LAB_01e5df50;
        lVar1 = *(long *)(lVar5 + 1000) + lVar2;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar2 = lVar2 + 1;
          goto LAB_01e5df50;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar2 = lVar2 + 2;
          goto LAB_01e5df50;
        }
        lVar2 = lVar2 + 3;
      } while (lVar2 != 0x80001);
      lVar2 = 0;
LAB_01e5df50:
      uVar4 = (uint)lVar2;
      if (9 < uVar4) {
        uVar4 = 10;
      }
      (**(code **)(*(long *)(lVar5 + 0x3e0) + 0x18))(lVar5 + 0x3e0);
      memcpy(auStack_46,*(void **)(lVar5 + 1000),(ulong)uVar4);
      local_38 = 0;
      local_32 = 0;
      local_34 = 0xff00;
      if (-1 < DAT_053d0920) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0920,&local_38,&local_50,0x16,0);
      }
    }
  }
  return;
}

