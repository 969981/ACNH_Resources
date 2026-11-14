
void FUN_01841a58(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 5) {
    return;
  }
  if (param_2 == 4) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x1150);
  if (lVar5 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x1180) == 0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (lVar6 == 0) {
      puVar3 = malloc(8);
    }
    else {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar2 = (long *)(lVar6 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) goto LAB_01841b20;
      puVar3 = (undefined4 *)(**(code **)(*plVar2 + 0x30))(plVar2,8,8);
    }
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined2 *)(puVar3 + 1) = 0xffff;
      *puVar3 = 0xffffffff;
      *(undefined4 **)(param_1 + 0x1180) = puVar3;
      *(undefined4 *)(param_1 + 0x1178) = 1;
    }
  }
LAB_01841b20:
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "mFeather";
  pcStack_58 = "const_float1";
  local_50 = local_60;
  FUN_016102c0(param_1 + 0x1160,0,&local_50,&local_60);
  uVar4 = 0xffffffffffff;
  if ((*(ulong **)(param_1 + 0x1180) != (ulong *)0x0) && (*(long *)(param_1 + 0x1160) != 0)) {
    uVar4 = **(ulong **)(param_1 + 0x1180);
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,param_2);
  uVar7 = 0;
  if (param_2 < 4) {
    uVar7 = *(undefined4 *)(&DAT_04102ab0 + (long)(int)param_2 * 4);
  }
  plVar2 = (long *)**(undefined8 **)
                     (*(long *)(lVar5 + 0x38) +
                     (-(uVar4 >> 0xf & 1) & 0xfffffffffff80000 | (uVar4 & 0xffff) << 3));
  (**(code **)(*plVar2 + 0x118))(uVar7,plVar2,(int)uVar4 >> 0x10,(int)(uVar4 >> 0x10) >> 0x10);
  return;
}

