
void FUN_007ca4e0(long param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  void *__dest;
  void *__src;
  undefined *local_168;
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  __dest = *(void **)(param_1 + 0x30);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_007ca58c;
      lVar3 = param_2[1] + lVar5;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_007ca58c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_007ca58c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_007ca58c:
    iVar1 = (int)lVar5;
    if (*(int *)(param_1 + 0x38) <= (int)lVar5) {
      iVar1 = *(int *)(param_1 + 0x38) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x18))(param_1 + 0x28);
  uVar2 = FUN_006bd550(*(undefined8 *)(param_1 + 0x30),0);
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  local_158 = 0x100;
  puStack_160 = local_154;
  local_55 = 0;
  local_154[0] = 0;
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  (**(code **)(*(long *)(param_1 + 0x28) + 0x18))(param_1 + 0x28);
  FUN_038d1270(&local_168,"AnimationSequence/%s%s",*(undefined8 *)(param_1 + 0x30),".root.asb");
  if (param_3 == 0) {
    lVar5 = 1;
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar5 = *(long *)(lVar3 + 0xa8);
    *(long *)(lVar3 + 0xa8) = param_3;
  }
  uVar4 = FUN_00818d2c(*(undefined8 *)PTR_DAT_04bb2110,&local_168,0x1000);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  if (lVar5 != 1) {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar3 + 0xa8) = lVar5;
  }
  return;
}

