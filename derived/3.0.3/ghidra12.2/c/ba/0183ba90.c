
void FUN_0183ba90(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined *local_40;
  char *pcStack_38;
  
  lVar5 = *(long *)(param_1 + 0x3d0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x2d8) + 0x28))(lVar5 + 0x2d8);
    puVar3 = PTR_DAT_04bb27d0;
    plVar6 = *(long **)PTR_DAT_04bb27d0;
    uVar4 = FUN_01d3e29c(*plVar6 + 8);
    if ((uVar4 & 1) != 0) {
      bVar2 = *(byte *)(**(long **)puVar3 + 0x473);
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        lVar5 = plVar6[2] + 0x108;
        lVar1 = lVar5 + ((long)(char)bVar2 & 0xffffffffU) * 0xc;
        if (0xb < bVar2) {
          lVar1 = lVar5;
        }
        if (*(char *)(lVar1 + 10) == '\0') goto LAB_0183bb1c;
      }
    }
  }
  FUN_0183bb88(param_1);
LAB_0183bb1c:
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  *(undefined1 *)(param_1 + 0x3b4) = 0;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "FlyWait";
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar5 != 0)) {
    FUN_0073d870(lVar5,&local_40,10,0,0);
  }
  *(undefined4 *)(param_1 + 0x508) = 1;
  return;
}

