
void FUN_007a5e90(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *__dest;
  uint uVar8;
  undefined1 *puVar9;
  undefined **local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if ((((*(byte *)(param_1 + 0x2a8) & 1) != 0) && (lVar5 = *(long *)(param_1 + 0x2b0), lVar5 != 0))
     && (lVar6 = *(long *)(lVar5 + 0x18), (*(byte *)(lVar5 + 8) & 10) == 2 && lVar6 != 0)) {
    local_50 = *(undefined1 **)(param_3 + 8);
    local_34 = 0;
    local_38 = *(undefined4 *)(param_4 + 1);
    uVar7 = *param_4;
    local_58 = &PTR_LAB_048f9770;
    iVar3 = *(int *)(lVar6 + 0x198);
    iVar4 = *(int *)(lVar6 + 400);
    if (iVar3 < iVar4) {
      *(int *)(lVar6 + 0x198) = iVar3 + 1;
      if (*(long *)(lVar6 + 0x188) != 0) {
        iVar3 = *(int *)(lVar6 + 0x194) + iVar3;
        iVar2 = 0;
        if (iVar4 <= iVar3) {
          iVar2 = iVar4;
        }
        puVar9 = (undefined1 *)(*(long *)(lVar6 + 0x188) + (long)(iVar3 - iVar2) * 0xb0);
        *puVar9 = 0;
        *(undefined8 *)(puVar9 + 8) = param_2;
        local_40._0_4_ = (undefined4)uVar7;
        *(undefined4 *)(puVar9 + 0x10) = (undefined4)local_40;
        local_40._4_4_ = (undefined4)((ulong)uVar7 >> 0x20);
        *(undefined4 *)(puVar9 + 0x14) = local_40._4_4_;
        *(undefined4 *)(puVar9 + 0x18) = local_38;
        local_48 = param_2;
        local_40 = uVar7;
        (*(code *)PTR_FUN_048f9788)(&local_58);
        __dest = *(undefined1 **)(puVar9 + 0x20);
        if (__dest != local_50) {
          lVar5 = 0;
          do {
            pcVar1 = local_50 + lVar5;
            lVar5 = lVar5 + 1;
          } while (*pcVar1 != '\0');
          uVar8 = (int)lVar5 - 1;
          if (*(int *)(puVar9 + 0x2c) <= (int)uVar8) {
            uVar8 = *(int *)(puVar9 + 0x2c) - 1;
          }
          if ((int)uVar8 < 1) {
            uVar8 = 0;
          }
          else {
            memcpy(__dest,local_50,(ulong)uVar8);
            __dest = __dest + uVar8;
          }
          *__dest = 0;
          *(uint *)(puVar9 + 0x28) = uVar8;
        }
      }
    }
  }
  return;
}

