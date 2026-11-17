
void FUN_031052c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  plVar2 = *(long **)(param_1 + 0x58);
  local_38 = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_38);
    if (local_38 != 0) {
      plVar2 = (long *)(local_38 + 0xb8);
      if (*plVar2 != 0) {
        pcVar3 = (char *)FUN_00364e30(plVar2,"SizeType");
        if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
          local_48 = PTR_DAT_04bb2020 + 0x10;
          pcStack_40 = pcVar3;
          uVar4 = FUN_03c68d44(param_2,&local_48,PTR_PTR_04bb2238);
          *(undefined8 *)(param_1 + 0x208) = uVar4;
        }
        pcVar3 = (char *)FUN_00364d70(plVar2,"MyDesignTexture");
        if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
          local_48 = PTR_DAT_04bb2020 + 0x10;
          pcStack_40 = pcVar3;
          if (*pcVar3 == '\0') {
LAB_031053c0:
            FUN_0386fd70(&local_48);
            uVar4 = FUN_03c688b0(param_2,&local_48);
          }
          else {
            if (*pcVar3 != '@') {
              lVar5 = 0;
              do {
                if ((lVar5 == 0x80000) || (lVar1 = lVar5 + 1, pcVar3[lVar1] == '\0'))
                goto LAB_031053c0;
                lVar5 = lVar5 + 1;
              } while (pcVar3[lVar1] != '@');
            }
            uVar4 = FUN_03c68b00(param_2,&local_48);
          }
          *(undefined8 *)(param_1 + 0x210) = uVar4;
        }
        pcVar3 = (char *)FUN_00364d70(plVar2,"MaskTexture");
        if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
          local_48 = PTR_DAT_04bb2020 + 0x10;
          pcStack_40 = pcVar3;
          if (*pcVar3 == '\0') {
LAB_0310544c:
            FUN_0386fd70(&local_48);
            uVar4 = FUN_03c688b0(param_2,&local_48);
          }
          else {
            if (*pcVar3 != '@') {
              lVar5 = 0;
              do {
                if ((lVar5 == 0x80000) || (lVar1 = lVar5 + 1, pcVar3[lVar1] == '\0'))
                goto LAB_0310544c;
                lVar5 = lVar5 + 1;
              } while (pcVar3[lVar1] != '@');
            }
            uVar4 = FUN_03c68b00(param_2,&local_48);
          }
          *(undefined8 *)(param_1 + 0x218) = uVar4;
        }
      }
    }
  }
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

