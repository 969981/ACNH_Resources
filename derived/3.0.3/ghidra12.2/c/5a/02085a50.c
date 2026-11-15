
bool FUN_02085a50(long param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 *__dest;
  undefined8 uVar7;
  undefined1 *puVar8;
  long *plVar9;
  long lVar10;
  undefined *local_c0;
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  int local_64;
  undefined *local_60;
  long lStack_58;
  
  puVar3 = (undefined4 *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x294) * 0x20;
  if (4 < *(uint *)(param_1 + 0x294)) {
    puVar3 = (undefined4 *)(param_1 + 0x10);
  }
  iVar4 = puVar3[1];
  local_60 = (undefined *)CONCAT44(local_60._4_4_,iVar4);
  if (iVar4 <= param_3) {
    lVar10 = *(long *)(param_1 + 8);
    local_64 = param_3;
    if (**(char **)(lVar10 + 0x1408) != '\0') {
      uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0x12c0) + 0x280);
      lStack_58 = *(long *)(lVar10 + 0x13f8);
      if (lStack_58 == 0) {
        if (*(int *)(lVar10 + 0x1380) == 0) {
          plVar9 = (long *)0x0;
        }
        else {
          iVar5 = *(int *)(lVar10 + 0x1380) + *(int *)(lVar10 + 0x137c) + -1;
          iVar2 = 0;
          if (*(int *)(lVar10 + 0x1378) <= iVar5) {
            iVar2 = *(int *)(lVar10 + 0x1378);
          }
          plVar9 = (long *)(*(long *)(lVar10 + 0x1370) + (long)(iVar5 - iVar2) * 0x38);
        }
        (**(code **)(*plVar9 + 0x18))(plVar9);
        lStack_58 = plVar9[1];
      }
      local_60 = PTR_DAT_04bb2020 + 0x10;
      FUN_03ef3440(uVar7,&local_60);
      **(undefined1 **)(lVar10 + 0x1408) = 0;
    }
    *(undefined4 *)(param_1 + 0x55c) = 0;
    local_6d = 0;
    *(undefined8 *)(puVar3 + 2) = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    puVar6 = PTR_DAT_04bb6928;
    local_b0 = 0x40;
    local_c0 = PTR_DAT_04bb2f70 + 0x10;
    local_b8 = local_ac;
    (**(code **)(*(long *)PTR_DAT_04bb6928 + 0x18))(PTR_DAT_04bb6928);
    puVar8 = *(undefined1 **)(puVar6 + 8);
    if (local_ac != puVar8) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
      lVar10 = 0;
      do {
        if (*(char *)(*(long *)(puVar6 + 8) + lVar10) == '\0') goto LAB_02085be0;
        lVar1 = *(long *)(puVar6 + 8) + lVar10;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_02085be0;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_02085be0;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_02085be0:
      iVar2 = (int)lVar10;
      if (local_b0 <= (int)lVar10) {
        iVar2 = local_b0 + -1;
      }
      memcpy(local_ac,puVar8,(long)iVar2);
      local_ac[iVar2] = 0;
    }
    puVar8 = local_b8;
    puVar6 = PTR_DAT_04bb2bc0;
    local_c0 = PTR_DAT_04bb2bc0 + 0x10;
    __dest = *(undefined1 **)(puVar3 + 8);
    local_b8[(long)local_b0 + -1] = 0;
    if (__dest != local_b8) {
      (**(code **)(puVar6 + 0x28))(&local_c0);
      lVar10 = 0;
      do {
        if (local_b8[lVar10] == '\0') goto LAB_02085c8c;
        if (local_b8[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_02085c8c;
        }
        if (local_b8[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_02085c8c;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_02085c8c:
      iVar2 = (int)lVar10;
      if ((int)puVar3[10] <= (int)lVar10) {
        iVar2 = puVar3[10] + -1;
      }
      memcpy(__dest,puVar8,(long)iVar2);
      __dest[iVar2] = 0;
    }
    puVar3[0x1e] = 0;
    *puVar3 = param_2;
    *(undefined2 *)(puVar3 + 0x1f) = 0;
    *(undefined1 *)((long)puVar3 + 0x7e) = 0;
  }
  return iVar4 <= param_3;
}

