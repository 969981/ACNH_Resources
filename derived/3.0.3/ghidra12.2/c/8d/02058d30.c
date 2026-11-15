
bool FUN_02058d30(long param_1)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  char *pcVar6;
  long lVar7;
  ushort local_4;
  undefined1 local_2;
  
  local_4 = 0x23;
  local_2 = 8;
  FUN_020fd3a0(&local_4);
  lVar7 = *DAT_0537d558;
  bVar3 = *(byte *)(lVar7 + 0x473);
  pcVar6 = PTR_DAT_04bc1220;
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
    if (7 < bVar3) {
      puVar1 = (uint *)(lVar7 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pcVar6 = (char *)(lVar7 + 0x473);
    }
  }
  uVar4 = local_4 >> 8 | local_4 << 8;
  cVar2 = *pcVar6;
  if ((((((uVar4 == (ushort)(*(ushort *)(param_1 + 0x94) >> 8 | *(ushort *)(param_1 + 0x94) << 8))
         && (*(char *)(param_1 + 0x97) == cVar2)) && (*(int *)(param_1 + 0x90) == 3)) ||
       (((uVar4 == (ushort)(*(ushort *)(param_1 + 0xcc) >> 8 | *(ushort *)(param_1 + 0xcc) << 8) &&
         (*(char *)(param_1 + 0xcf) == cVar2)) && (*(int *)(param_1 + 200) == 3)))) ||
      ((((((uVar4 == (ushort)(*(ushort *)(param_1 + 0x104) >> 8 | *(ushort *)(param_1 + 0x104) << 8)
           && (*(char *)(param_1 + 0x107) == cVar2)) && (*(int *)(param_1 + 0x100) == 3)) ||
         (((uVar4 == (ushort)(*(ushort *)(param_1 + 0x13c) >> 8 | *(ushort *)(param_1 + 0x13c) << 8)
           && (*(char *)(param_1 + 0x13f) == cVar2)) && (*(int *)(param_1 + 0x138) == 3)))) ||
        (((uVar4 == (ushort)(*(ushort *)(param_1 + 0x174) >> 8 | *(ushort *)(param_1 + 0x174) << 8)
          && (*(char *)(param_1 + 0x177) == cVar2)) && (*(int *)(param_1 + 0x170) == 3)))) ||
       ((((uVar4 == (ushort)(*(ushort *)(param_1 + 0x1ac) >> 8 | *(ushort *)(param_1 + 0x1ac) << 8)
          && (*(char *)(param_1 + 0x1af) == cVar2)) && (*(int *)(param_1 + 0x1a8) == 3)) ||
        (((uVar4 == (ushort)(*(ushort *)(param_1 + 0x1e4) >> 8 | *(ushort *)(param_1 + 0x1e4) << 8)
          && (*(char *)(param_1 + 0x1e7) == cVar2)) && (*(int *)(param_1 + 0x1e0) == 3)))))))) ||
     ((((uVar4 == (ushort)(*(ushort *)(param_1 + 0x21c) >> 8 | *(ushort *)(param_1 + 0x21c) << 8) &&
        (*(char *)(param_1 + 0x21f) == cVar2)) && (*(int *)(param_1 + 0x218) == 3)) ||
      (((uVar4 == (ushort)(*(ushort *)(param_1 + 0x254) >> 8 | *(ushort *)(param_1 + 0x254) << 8) &&
        (*(char *)(param_1 + 599) == cVar2)) && (*(int *)(param_1 + 0x250) == 3)))))) {
    bVar5 = true;
  }
  else {
    bVar5 = (uVar4 == (ushort)(*(ushort *)(param_1 + 0x28c) >> 8 | *(ushort *)(param_1 + 0x28c) << 8
                              ) && *(char *)(param_1 + 0x28f) == cVar2) &&
            *(int *)(param_1 + 0x288) == 3;
  }
  return bVar5;
}

