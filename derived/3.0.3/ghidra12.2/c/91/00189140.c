
undefined8 FUN_00189140(long param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *__ptr;
  long *plVar5;
  code *pcVar6;
  undefined1 auStack_88 [8];
  short local_80;
  uint local_7c;
  int iStack_78;
  uint local_70;
  uint local_6c;
  undefined1 local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bcbcb0;
  puVar2 = PTR_DAT_04bcbca8;
  if (**(long **)(param_1 + 0x30) != 0) {
    if (param_2 == -1) {
      cVar1 = *(char *)(param_1 + 0x52);
      while (cVar1 == '\0') {
        FUN_0018af38(auStack_88,100,100);
        local_80 = 2;
        cVar1 = *(char *)(param_1 + 0x52);
        while (cVar1 == '\0') {
          if (local_7c == 0) {
LAB_001893bc:
            if (*puVar2 != '\0') goto LAB_001893c4;
LAB_001893fc:
            FUN_0018cb8c(&local_50);
            *(ulong *)puVar3 = CONCAT44(uStack_4c,local_50);
            local_70 = local_50 - iStack_78;
            if (local_7c != 0) goto LAB_0018941c;
LAB_00189390:
            local_58 = 1;
            if (local_80 == 2) break;
          }
          else {
            if (local_6c != 0) {
              nn::os::SleepThread((ulong)local_6c * 1000000);
              goto LAB_001893bc;
            }
            nn::os::YieldThread();
            if (*puVar2 == '\0') goto LAB_001893fc;
LAB_001893c4:
            FUN_0018c9b0(&local_50,0);
            *(ulong *)puVar3 = CONCAT44(uStack_4c,local_50);
            local_70 = local_50 - iStack_78;
            if (local_7c == 0) goto LAB_00189390;
LAB_0018941c:
            if (local_7c < local_70) goto LAB_00189390;
          }
          cVar1 = *(char *)(param_1 + 0x52);
        }
        FUN_0018afc4(auStack_88);
        cVar1 = *(char *)(param_1 + 0x52);
      }
    }
    else {
      FUN_0018af38(auStack_88,100,param_2);
      puVar3 = PTR_DAT_04bcbcb0;
      puVar2 = PTR_DAT_04bcbca8;
      local_80 = 2;
      cVar1 = *(char *)(param_1 + 0x52);
      while (cVar1 == '\0') {
        if (local_7c == 0) {
LAB_0018923c:
          if (*puVar2 != '\0') goto LAB_00189244;
LAB_0018927c:
          FUN_0018cb8c(&local_50);
          *(ulong *)puVar3 = CONCAT44(uStack_4c,local_50);
          local_70 = local_50 - iStack_78;
          if (local_7c != 0) goto LAB_0018929c;
LAB_00189210:
          local_58 = 1;
          if (local_80 == 2) break;
        }
        else {
          if (local_6c != 0) {
            nn::os::SleepThread((ulong)local_6c * 1000000);
            goto LAB_0018923c;
          }
          nn::os::YieldThread();
          if (*puVar2 == '\0') goto LAB_0018927c;
LAB_00189244:
          FUN_0018c9b0(&local_50,0);
          *(ulong *)puVar3 = CONCAT44(uStack_4c,local_50);
          local_70 = local_50 - iStack_78;
          if (local_7c == 0) goto LAB_00189210;
LAB_0018929c:
          if (local_7c < local_70) goto LAB_00189210;
        }
        cVar1 = *(char *)(param_1 + 0x52);
      }
      puVar2 = PTR_DAT_04bcbc88;
      if (*(char *)(param_1 + 0x52) == '\0') {
        local_50 = -0x1ffffff4;
        local_44 = 0;
        FUN_0018cd00(*(long *)PTR_DAT_04bcbc88 + 0x38,&local_50);
        FUN_0018cd00(*(long *)puVar2 + 0xb8,&local_44);
        FUN_0018afc4(auStack_88);
        return 0;
      }
      FUN_0018afc4(auStack_88);
    }
    nn::os::WaitThread((ThreadType *)**(undefined8 **)(param_1 + 0x30));
    nn::os::DestroyThread((ThreadType *)**(undefined8 **)(param_1 + 0x30));
    plVar5 = *(long **)(param_1 + 0x30);
    *(undefined1 *)(plVar5 + 2) = 1;
    lVar4 = *plVar5;
    if (lVar4 != 0) {
      __ptr = (undefined8 *)(lVar4 + -0x10);
      pcVar6 = (code *)*__ptr;
      if (pcVar6 == (code *)0x0) {
        free(__ptr);
      }
      else {
        (*pcVar6)();
      }
    }
    **(undefined8 **)(param_1 + 0x30) = 0;
  }
  return 1;
}

