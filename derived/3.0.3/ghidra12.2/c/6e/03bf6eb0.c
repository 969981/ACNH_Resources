
void FUN_03bf6eb0(uint *param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  void *pvVar7;
  Friend *pFVar8;
  size_t sVar9;
  long lVar10;
  Friend *this;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar3 = PTR_DAT_04bb2698;
  if ((int)param_3 < 1) goto LAB_03bf7040;
  sVar9 = (ulong)param_3 * 0x238 + 8;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    puVar6 = malloc(sVar9);
joined_r0x03bf6f6c:
    if (puVar6 != (ulong *)0x0) {
      pFVar8 = (Friend *)(puVar6 + 1);
      *puVar6 = (ulong)param_3;
      puVar1 = PTR_DAT_04bbd6c0 + 0x10;
      this = pFVar8;
      do {
        nn::friends::Friend::Friend(this);
        *(undefined4 *)(this + 0x210) = 0x10;
        *(undefined2 *)(this + 0x232) = 0;
        *(Friend **)(this + 0x208) = this + 0x214;
        *(undefined2 *)(this + 0x214) = 0;
        *(undefined **)(this + 0x200) = puVar1;
        this = this + 0x238;
      } while (this != pFVar8 + (ulong)param_3 * 0x238);
      *param_1 = param_3;
      *(Friend **)(param_1 + 2) = pFVar8;
    }
    lVar10 = *(long *)puVar3;
    sVar9 = (size_t)(int)(param_3 << 3);
    if (lVar10 == 0) goto LAB_03bf7064;
    if (param_2 == (long *)0x0) {
LAB_03bf6ff0:
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar10 + 8);
      if (lVar4 != 0) {
        puVar2 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_2 = (long *)*puVar2;
      if (param_2 == (long *)0x0) goto LAB_03bf7040;
    }
    pvVar7 = (void *)(**(code **)(*param_2 + 0x30))(param_2,sVar9,8);
  }
  else {
    plVar5 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03bf6f40:
      puVar6 = (ulong *)(**(code **)(*plVar5 + 0x30))(plVar5,sVar9,8);
      goto joined_r0x03bf6f6c;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar10 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_03bf6f40;
    lVar10 = *(long *)puVar3;
    sVar9 = (size_t)(int)(param_3 << 3);
    if (lVar10 != 0) goto LAB_03bf6ff0;
LAB_03bf7064:
    pvVar7 = malloc(sVar9);
  }
  if (pvVar7 != (void *)0x0) {
    *(void **)(param_1 + 6) = pvVar7;
    param_1[4] = 0;
    param_1[5] = param_3;
  }
LAB_03bf7040:
  param_1[4] = 0;
  param_1[8] = 0;
  return;
}

