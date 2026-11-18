
/* WARNING: Removing unreachable block (ram,0x032c7364) */

void FUN_032c7320(long param_1,long *param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  long lStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  long lStack_60;
  undefined *local_58;
  char *pcStack_50;
  undefined1 local_48 [4];
  int local_44;
  
  local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
  puVar2 = (undefined8 *)
           (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x18) + 0x30))
                     ((long *)**(undefined8 **)(param_1 + 0x18),0x70,8);
  puVar1 = PTR_DAT_04bc8e60;
  *puVar2 = 0;
  puVar2[1] = 0;
  local_98 = PTR_DAT_04bc8e68;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 4) = 0;
  puVar2[0xc] = &DAT_3f8000003f800000;
  puVar2[0xd] = 0;
  puVar2[5] = 0;
  puVar2[6] = puVar1 + 0x10;
  puVar2[7] = 0;
  local_98 = local_98 + 0x10;
  uStack_70 = *(undefined8 *)(param_3 + 8);
  lStack_80 = param_2[1];
  uStack_90 = *(undefined8 *)(param_4 + 8);
  local_88 = local_98;
  local_78 = local_98;
  FUN_032c5a90(puVar2,*(undefined8 *)(param_1 + 0x28),&local_78,&local_88,&local_98);
  puVar4 = puVar2;
  do {
    plVar3 = puVar4 + 5;
    puVar4 = (undefined8 *)puVar4[3];
  } while (puVar4 != (undefined8 *)0x0 && *plVar3 == 0);
  if ((*plVar3 == 0) && (**(char **)(param_5 + 8) != '\0')) {
    local_44 = 0;
    local_48[0] = 0;
    lStack_60 = param_2[1];
    local_68 = PTR_DAT_04bb2020 + 0x10;
    local_58 = local_68;
    pcStack_50 = *(char **)(param_5 + 8);
    FUN_032ca830(*(undefined8 *)(*(long *)PTR_DAT_04bc6338 + 0x580),&local_44,local_48,&local_58,
                 &local_68);
    if (local_44 != 0) {
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 != 0) {
        lVar6 = lVar5;
        do {
          if (*(int *)(lVar6 + 0x68) == local_44) goto LAB_032c74e0;
          lVar6 = *(long *)(lVar6 + 0x10);
        } while (lVar6 != 0);
      }
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
  }
  goto LAB_032c73f8;
  while (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0) {
LAB_032c74e0:
    if (*(int *)(lVar5 + 0x68) == local_44) break;
  }
  lVar6 = lVar5;
  do {
    plVar3 = (long *)(lVar6 + 0x28);
    lVar6 = *(long *)(lVar6 + 0x18);
  } while (lVar6 != 0 && *plVar3 == 0);
  if (*plVar3 != 0) {
    puVar2[3] = lVar5;
    *(undefined1 *)(puVar2 + 4) = local_48[0];
  }
LAB_032c73f8:
  puVar4 = puVar2;
  do {
    puVar7 = puVar4;
    plVar3 = (long *)puVar7[5];
    puVar4 = (undefined8 *)puVar7[3];
  } while ((undefined8 *)puVar7[3] != (undefined8 *)0x0 && plVar3 == (long *)0x0);
  *(undefined4 *)((long)puVar7 + 0x6c) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,0);
  }
  puVar7 = (undefined8 *)(param_1 + 0x20);
  puVar4 = (undefined8 *)*puVar7;
  if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
    *puVar7 = puVar2;
  }
  else {
    do {
      puVar7 = puVar4;
      puVar4 = (undefined8 *)puVar7[2];
    } while ((undefined8 *)puVar7[2] != (undefined8 *)0x0);
    puVar7[2] = puVar2;
    puVar2[1] = puVar7;
    puVar7 = (undefined8 *)*puVar7;
  }
  *puVar2 = puVar7;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_58 = (undefined *)0x0;
  local_68 = (undefined *)0x0;
  nn::os::GetCurrentStackInfo((ulong *)&local_58,(ulong *)&local_68);
  return;
}

