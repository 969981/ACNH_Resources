
/* WARNING: Removing unreachable block (ram,0x024bd234) */
/* WARNING: Removing unreachable block (ram,0x024bd15c) */
/* WARNING: Removing unreachable block (ram,0x024bd084) */
/* WARNING: Removing unreachable block (ram,0x024bcfac) */
/* WARNING: Removing unreachable block (ram,0x024bd30c) */

int FUN_024bcd34(undefined1 param_1 [16],float param_2,float param_3,long param_4,char *param_5)

{
  float *pfVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  byte bVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  int local_78;
  float fStack_74;
  float local_70;
  ushort local_6c;
  undefined1 local_6a;
  int local_68;
  int local_64;
  
  pfVar1 = (float *)PTR_DAT_04bc3038;
  iVar10 = *(int *)(*(long *)(param_4 + 0x68) + 0x2b4);
  local_64 = iVar10;
  if (*(int *)(param_4 + 0x178) == 0) {
    pfVar5 = (float *)PTR_DAT_04bc3038;
    if (*(char *)(param_4 + 0x12f8) != '\0') {
      pfVar5 = (float *)(param_4 + 0xeec);
    }
    param_2 = pfVar5[1];
    param_3 = param_2 * param_2;
    fVar11 = SQRT(param_3 + *pfVar5 * *pfVar5);
    lVar4 = FUN_0251e98c(1);
    pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x120) + 0xf0))(lVar4 + 0x120);
    if (*pfVar5 <= fVar11) {
      lVar4 = FUN_0251e98c(1);
      pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x120) + 0xf0))(lVar4 + 0x120);
      fVar8 = *pfVar5;
      lVar4 = FUN_0251e98c(1);
      pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x120) + 0xf0))(lVar4 + 0x120);
      param_2 = (fVar11 - *pfVar5) / (1.0 - fVar8);
      fVar11 = 0.9999;
      if (param_2 <= 0.9999) {
        fVar11 = param_2;
      }
      if (((0.0 <= param_2) && (0.0 < fVar11)) &&
         (local_78 = 10, (*(byte *)(param_4 + 0x18f5) >> 2 & 1) == 0)) {
        local_78 = 10;
        if (*(char *)(param_4 + 0x12f8) != '\0') {
          pfVar1 = (float *)(param_4 + 0xeec);
        }
        FUN_02569464(&local_78,pfVar1);
        local_64 = local_78;
        iVar10 = local_78;
      }
    }
  }
  if (param_5[1] != '\0') {
    param_2 = 11930465.0;
    iVar10 = (int)(long)((float)(iVar10 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
    local_64 = iVar10;
  }
  lVar4 = *(long *)(param_4 + 0x68);
  if (*param_5 != '\0') {
    local_68 = iVar10;
    iVar9 = FUN_024bd370(*(undefined4 *)(param_5 + 4),lVar4 + 0x278,&local_68);
    puVar3 = PTR_DAT_04bb4f78;
    bVar2 = *(byte *)(param_4 + 0x1ee8);
    bVar7 = 0;
    local_6a = 0;
    lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)bVar2 * 0x740;
    if (7 < bVar2) {
      lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if ((ulong)bVar2 < 8) {
      bVar7 = *(byte *)(DAT_054f5738 + (ulong)bVar2 * 0x80 + 0x302) >> 1 & 1;
    }
    local_6c = (ushort)bVar7;
    local_78 = iVar9;
    fStack_74 = param_2;
    local_70 = param_3;
    uVar6 = FUN_022bca8c(lVar4 + 0xb0,&local_78);
    if ((uVar6 & 1) != 0) {
      return iVar9;
    }
    local_68 = iVar10 + 0xaaaaab0;
    iVar9 = FUN_024bd370(*(undefined4 *)(param_5 + 4),*(long *)(param_4 + 0x68) + 0x278,&local_68);
    bVar2 = *(byte *)(param_4 + 0x1ee8);
    bVar7 = 0;
    local_6a = 0;
    lVar4 = *(long *)puVar3 + 0x20 + (ulong)(uint)bVar2 * 0x740;
    if (7 < bVar2) {
      lVar4 = *(long *)puVar3 + 0x20;
    }
    if ((ulong)bVar2 < 8) {
      bVar7 = *(byte *)(DAT_054f5738 + (ulong)bVar2 * 0x80 + 0x302) >> 1 & 1;
    }
    local_6c = (ushort)bVar7;
    local_78 = iVar9;
    fStack_74 = param_2;
    local_70 = param_3;
    uVar6 = FUN_022bca8c(lVar4 + 0xb0,&local_78);
    if ((uVar6 & 1) != 0) {
      return iVar9;
    }
    local_68 = iVar10 + -0xaaaaab0;
    iVar9 = FUN_024bd370(*(undefined4 *)(param_5 + 4),*(long *)(param_4 + 0x68) + 0x278,&local_68);
    bVar2 = *(byte *)(param_4 + 0x1ee8);
    bVar7 = 0;
    local_6a = 0;
    lVar4 = *(long *)puVar3 + 0x20 + (ulong)(uint)bVar2 * 0x740;
    if (7 < bVar2) {
      lVar4 = *(long *)puVar3 + 0x20;
    }
    if ((ulong)bVar2 < 8) {
      bVar7 = *(byte *)(DAT_054f5738 + (ulong)bVar2 * 0x80 + 0x302) >> 1 & 1;
    }
    local_6c = (ushort)bVar7;
    local_78 = iVar9;
    fStack_74 = param_2;
    local_70 = param_3;
    uVar6 = FUN_022bca8c(lVar4 + 0xb0,&local_78);
    if ((uVar6 & 1) != 0) {
      return iVar9;
    }
    local_68 = iVar10 + 0x18e38e40;
    iVar9 = FUN_024bd370(*(undefined4 *)(param_5 + 4),*(long *)(param_4 + 0x68) + 0x278,&local_68);
    bVar2 = *(byte *)(param_4 + 0x1ee8);
    bVar7 = 0;
    local_6a = 0;
    lVar4 = *(long *)puVar3 + 0x20 + (ulong)(uint)bVar2 * 0x740;
    if (7 < bVar2) {
      lVar4 = *(long *)puVar3 + 0x20;
    }
    if ((ulong)bVar2 < 8) {
      bVar7 = *(byte *)(DAT_054f5738 + (ulong)bVar2 * 0x80 + 0x302) >> 1 & 1;
    }
    local_6c = (ushort)bVar7;
    local_78 = iVar9;
    fStack_74 = param_2;
    local_70 = param_3;
    uVar6 = FUN_022bca8c(lVar4 + 0xb0,&local_78);
    if ((uVar6 & 1) != 0) {
      return iVar9;
    }
    local_68 = iVar10 + -0x18e38e40;
    iVar10 = FUN_024bd370(*(undefined4 *)(param_5 + 4),*(long *)(param_4 + 0x68) + 0x278,&local_68);
    bVar2 = *(byte *)(param_4 + 0x1ee8);
    bVar7 = 0;
    local_6a = 0;
    lVar4 = *(long *)puVar3 + 0x20 + (ulong)(uint)bVar2 * 0x740;
    if (7 < bVar2) {
      lVar4 = *(long *)puVar3 + 0x20;
    }
    if ((ulong)bVar2 < 8) {
      bVar7 = *(byte *)(DAT_054f5738 + (ulong)bVar2 * 0x80 + 0x302) >> 1 & 1;
    }
    local_6c = (ushort)bVar7;
    local_78 = iVar10;
    fStack_74 = param_2;
    local_70 = param_3;
    uVar6 = FUN_022bca8c(lVar4 + 0xb0,&local_78);
    if ((uVar6 & 1) != 0) {
      return iVar10;
    }
    lVar4 = *(long *)(param_4 + 0x68);
  }
  iVar10 = FUN_024bd370(*(undefined4 *)(param_5 + 4),lVar4 + 0x278,&local_64);
  return iVar10;
}

