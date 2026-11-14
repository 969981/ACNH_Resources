
void FUN_015adc00(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *__dest;
  uint uVar9;
  undefined1 *puVar10;
  undefined *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  puVar5 = PTR_DAT_04bb2020;
  if ((((*(byte *)(param_1 + 0x38) & 1) != 0) && (lVar6 = *(long *)(param_1 + 0x40), lVar6 != 0)) &&
     (lVar7 = *(long *)(lVar6 + 0x18), (*(byte *)(lVar6 + 8) & 10) == 2 && lVar7 != 0)) {
    local_34 = 0;
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_38 = *(undefined4 *)(param_3 + 1);
    uVar8 = *param_3;
    local_50 = DAT_052252f8;
    iVar3 = *(int *)(lVar7 + 0x1c0);
    iVar4 = *(int *)(lVar7 + 0x1b8);
    if (iVar3 < iVar4) {
      *(int *)(lVar7 + 0x1c0) = iVar3 + 1;
      if (*(long *)(lVar7 + 0x1b0) != 0) {
        iVar3 = *(int *)(lVar7 + 0x1bc) + iVar3;
        iVar2 = 0;
        if (iVar4 <= iVar3) {
          iVar2 = iVar4;
        }
        puVar10 = (undefined1 *)(*(long *)(lVar7 + 0x1b0) + (long)(iVar3 - iVar2) * 0xb0);
        *puVar10 = 0;
        *(undefined8 *)(puVar10 + 8) = param_2;
        local_40._0_4_ = (undefined4)uVar8;
        *(undefined4 *)(puVar10 + 0x10) = (undefined4)local_40;
        local_40._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
        *(undefined4 *)(puVar10 + 0x14) = local_40._4_4_;
        *(undefined4 *)(puVar10 + 0x18) = local_38;
        local_48 = param_2;
        local_40 = uVar8;
        (**(code **)(puVar5 + 0x28))(&local_58);
        __dest = *(undefined1 **)(puVar10 + 0x20);
        if (__dest != local_50) {
          lVar6 = 0;
          do {
            pcVar1 = local_50 + lVar6;
            lVar6 = lVar6 + 1;
          } while (*pcVar1 != '\0');
          uVar9 = (int)lVar6 - 1;
          if (*(int *)(puVar10 + 0x2c) <= (int)uVar9) {
            uVar9 = *(int *)(puVar10 + 0x2c) - 1;
          }
          if ((int)uVar9 < 1) {
            uVar9 = 0;
          }
          else {
            memcpy(__dest,local_50,(ulong)uVar9);
            __dest = __dest + uVar9;
          }
          *__dest = 0;
          *(uint *)(puVar10 + 0x28) = uVar9;
        }
      }
    }
  }
  return;
}

