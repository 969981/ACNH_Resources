
void FUN_039bb558(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  bVar1 = *(byte *)(param_2 + 0x70) & 7;
  lVar2 = 0;
  if ((*(byte *)(param_2 + 0x189) & 4) != 0) {
    lVar2 = 0x2a0;
  }
  uVar6 = *(ulong *)(param_1 + lVar2 + 0x20);
  if (uVar6 == 0) {
    uVar4 = 0x8000;
    if (bVar1 != 1) {
      uVar4 = 0;
    }
    uVar3 = *(ushort *)(param_1 + 0x110e) & 0x3fff;
  }
  else {
    uVar5 = (uint)uVar6;
    uVar7 = (uint)(uVar6 >> 0x20);
    uVar3 = (ushort)(bVar1 == 1) << 0xf |
            ((*(ushort *)
               (PTR_DAT_04bd0f10 +
               ((ulong)(*(ushort *)
                         (PTR_DAT_04bd0f10 +
                         ((ulong)(ushort)((ushort)(uVar6 >> 0x30) ^
                                         *(ushort *)
                                          (PTR_DAT_04bd0f10 +
                                          ((ulong)(uVar7 >> 8 ^
                                                  (uint)(ushort)(*(ushort *)
                                                                  (PTR_DAT_04bd0f10 +
                                                                  ((ulong)(uVar7 ^ (ushort)(*(ushort
                                                                                              *)(
                                                  PTR_DAT_04bd0f10 +
                                                  ((ulong)((uint)(ushort)(*(ushort *)
                                                                           (PTR_DAT_04bd0f10 +
                                                                           ((ulong)((uint)(ushort)(*
                                                  (ushort *)
                                                  (PTR_DAT_04bd0f10 +
                                                  ((ulong)((uint)*(ushort *)
                                                                  (PTR_DAT_04bd0f10 +
                                                                  (uVar6 & 0xff) * 2) ^ uVar5 >> 8)
                                                  & 0xff) * 2) ^
                                                  *(ushort *)(PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2)
                                                  >> 8) ^ uVar5 >> 0x10) & 0xff) * 2) ^
                                                  *(ushort *)
                                                   (PTR_DAT_04bd0f10 +
                                                   ((ulong)((uint)*(ushort *)
                                                                   (PTR_DAT_04bd0f10 +
                                                                   (uVar6 & 0xff) * 2) ^ uVar5 >> 8)
                                                   & 0xff) * 2) >> 8) ^ uVar5 >> 0x18) & 0xff) * 2)
                                                  ^ *(ushort *)
                                                     (PTR_DAT_04bd0f10 +
                                                     ((ulong)((uint)(ushort)(*(ushort *)
                                                                              (PTR_DAT_04bd0f10 +
                                                                              ((ulong)((uint)*(
                                                  ushort *)(PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2) ^
                                                  uVar5 >> 8) & 0xff) * 2) ^
                                                  *(ushort *)(PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2)
                                                  >> 8) ^ uVar5 >> 0x10) & 0xff) * 2) >> 8)) & 0xff)
                                                  * 2) ^ *(ushort *)
                                                          (PTR_DAT_04bd0f10 +
                                                          ((ulong)((uint)(ushort)(*(ushort *)
                                                                                   (PTR_DAT_04bd0f10
                                                                                   + ((ulong)((uint)
                                                  (ushort)(*(ushort *)
                                                            (PTR_DAT_04bd0f10 +
                                                            ((ulong)((uint)*(ushort *)
                                                                            (PTR_DAT_04bd0f10 +
                                                                            (uVar6 & 0xff) * 2) ^
                                                                    uVar5 >> 8) & 0xff) * 2) ^
                                                          *(ushort *)
                                                           (PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2)
                                                          >> 8) ^ uVar5 >> 0x10) & 0xff) * 2) ^
                                                  *(ushort *)
                                                   (PTR_DAT_04bd0f10 +
                                                   ((ulong)((uint)*(ushort *)
                                                                   (PTR_DAT_04bd0f10 +
                                                                   (uVar6 & 0xff) * 2) ^ uVar5 >> 8)
                                                   & 0xff) * 2) >> 8) ^ uVar5 >> 0x18) & 0xff) * 2)
                                                  >> 8)) & 0xff) * 2) ^
                                         *(ushort *)
                                          (PTR_DAT_04bd0f10 +
                                          ((ulong)(uVar7 ^ (ushort)(*(ushort *)
                                                                     (PTR_DAT_04bd0f10 +
                                                                     ((ulong)((uint)(ushort)(*(
                                                  ushort *)(PTR_DAT_04bd0f10 +
                                                           ((ulong)((uint)(ushort)(*(ushort *)
                                                                                    (
                                                  PTR_DAT_04bd0f10 +
                                                  ((ulong)((uint)*(ushort *)
                                                                  (PTR_DAT_04bd0f10 +
                                                                  (uVar6 & 0xff) * 2) ^ uVar5 >> 8)
                                                  & 0xff) * 2) ^
                                                  *(ushort *)(PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2)
                                                  >> 8) ^ uVar5 >> 0x10) & 0xff) * 2) ^
                                                  *(ushort *)
                                                   (PTR_DAT_04bd0f10 +
                                                   ((ulong)((uint)*(ushort *)
                                                                   (PTR_DAT_04bd0f10 +
                                                                   (uVar6 & 0xff) * 2) ^ uVar5 >> 8)
                                                   & 0xff) * 2) >> 8) ^ uVar5 >> 0x18) & 0xff) * 2)
                                                  ^ *(ushort *)
                                                     (PTR_DAT_04bd0f10 +
                                                     ((ulong)((uint)(ushort)(*(ushort *)
                                                                              (PTR_DAT_04bd0f10 +
                                                                              ((ulong)((uint)*(
                                                  ushort *)(PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2) ^
                                                  uVar5 >> 8) & 0xff) * 2) ^
                                                  *(ushort *)(PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2)
                                                  >> 8) ^ uVar5 >> 0x10) & 0xff) * 2) >> 8)) & 0xff)
                                          * 2) >> 8) & 0xff) * 2) & 0xff ^
                       (uint)(*(ushort *)
                               (PTR_DAT_04bd0f10 +
                               ((ulong)(uVar7 >> 8 ^
                                       (uint)(ushort)(*(ushort *)
                                                       (PTR_DAT_04bd0f10 +
                                                       ((ulong)(uVar7 ^ (ushort)(*(ushort *)
                                                                                  (PTR_DAT_04bd0f10
                                                                                  + ((ulong)((uint)(
                                                  ushort)(*(ushort *)
                                                           (PTR_DAT_04bd0f10 +
                                                           ((ulong)((uint)(ushort)(*(ushort *)
                                                                                    (
                                                  PTR_DAT_04bd0f10 +
                                                  ((ulong)((uint)*(ushort *)
                                                                  (PTR_DAT_04bd0f10 +
                                                                  (uVar6 & 0xff) * 2) ^ uVar5 >> 8)
                                                  & 0xff) * 2) ^
                                                  *(ushort *)(PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2)
                                                  >> 8) ^ uVar5 >> 0x10) & 0xff) * 2) ^
                                                  *(ushort *)
                                                   (PTR_DAT_04bd0f10 +
                                                   ((ulong)((uint)*(ushort *)
                                                                   (PTR_DAT_04bd0f10 +
                                                                   (uVar6 & 0xff) * 2) ^ uVar5 >> 8)
                                                   & 0xff) * 2) >> 8) ^ uVar5 >> 0x18) & 0xff) * 2)
                                                  ^ *(ushort *)
                                                     (PTR_DAT_04bd0f10 +
                                                     ((ulong)((uint)(ushort)(*(ushort *)
                                                                              (PTR_DAT_04bd0f10 +
                                                                              ((ulong)((uint)*(
                                                  ushort *)(PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2) ^
                                                  uVar5 >> 8) & 0xff) * 2) ^
                                                  *(ushort *)(PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2)
                                                  >> 8) ^ uVar5 >> 0x10) & 0xff) * 2) >> 8)) & 0xff)
                                                  * 2) ^ *(ushort *)
                                                          (PTR_DAT_04bd0f10 +
                                                          ((ulong)((uint)(ushort)(*(ushort *)
                                                                                   (PTR_DAT_04bd0f10
                                                                                   + ((ulong)((uint)
                                                  (ushort)(*(ushort *)
                                                            (PTR_DAT_04bd0f10 +
                                                            ((ulong)((uint)*(ushort *)
                                                                            (PTR_DAT_04bd0f10 +
                                                                            (uVar6 & 0xff) * 2) ^
                                                                    uVar5 >> 8) & 0xff) * 2) ^
                                                          *(ushort *)
                                                           (PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2)
                                                          >> 8) ^ uVar5 >> 0x10) & 0xff) * 2) ^
                                                  *(ushort *)
                                                   (PTR_DAT_04bd0f10 +
                                                   ((ulong)((uint)*(ushort *)
                                                                   (PTR_DAT_04bd0f10 +
                                                                   (uVar6 & 0xff) * 2) ^ uVar5 >> 8)
                                                   & 0xff) * 2) >> 8) ^ uVar5 >> 0x18) & 0xff) * 2)
                                                  >> 8)) & 0xff) * 2) >> 8)) ^ uVar6 >> 0x38) * 2) ^
             *(ushort *)
              (PTR_DAT_04bd0f10 +
              ((ulong)(ushort)((ushort)(uVar6 >> 0x30) ^
                              *(ushort *)
                               (PTR_DAT_04bd0f10 +
                               ((ulong)(uVar7 >> 8 ^
                                       (uint)(ushort)(*(ushort *)
                                                       (PTR_DAT_04bd0f10 +
                                                       ((ulong)(uVar7 ^ (ushort)(*(ushort *)
                                                                                  (PTR_DAT_04bd0f10
                                                                                  + ((ulong)((uint)(
                                                  ushort)(*(ushort *)
                                                           (PTR_DAT_04bd0f10 +
                                                           ((ulong)((uint)(ushort)(*(ushort *)
                                                                                    (
                                                  PTR_DAT_04bd0f10 +
                                                  ((ulong)((uint)*(ushort *)
                                                                  (PTR_DAT_04bd0f10 +
                                                                  (uVar6 & 0xff) * 2) ^ uVar5 >> 8)
                                                  & 0xff) * 2) ^
                                                  *(ushort *)(PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2)
                                                  >> 8) ^ uVar5 >> 0x10) & 0xff) * 2) ^
                                                  *(ushort *)
                                                   (PTR_DAT_04bd0f10 +
                                                   ((ulong)((uint)*(ushort *)
                                                                   (PTR_DAT_04bd0f10 +
                                                                   (uVar6 & 0xff) * 2) ^ uVar5 >> 8)
                                                   & 0xff) * 2) >> 8) ^ uVar5 >> 0x18) & 0xff) * 2)
                                                  ^ *(ushort *)
                                                     (PTR_DAT_04bd0f10 +
                                                     ((ulong)((uint)(ushort)(*(ushort *)
                                                                              (PTR_DAT_04bd0f10 +
                                                                              ((ulong)((uint)*(
                                                  ushort *)(PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2) ^
                                                  uVar5 >> 8) & 0xff) * 2) ^
                                                  *(ushort *)(PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2)
                                                  >> 8) ^ uVar5 >> 0x10) & 0xff) * 2) >> 8)) & 0xff)
                                                  * 2) ^ *(ushort *)
                                                          (PTR_DAT_04bd0f10 +
                                                          ((ulong)((uint)(ushort)(*(ushort *)
                                                                                   (PTR_DAT_04bd0f10
                                                                                   + ((ulong)((uint)
                                                  (ushort)(*(ushort *)
                                                            (PTR_DAT_04bd0f10 +
                                                            ((ulong)((uint)*(ushort *)
                                                                            (PTR_DAT_04bd0f10 +
                                                                            (uVar6 & 0xff) * 2) ^
                                                                    uVar5 >> 8) & 0xff) * 2) ^
                                                          *(ushort *)
                                                           (PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2)
                                                          >> 8) ^ uVar5 >> 0x10) & 0xff) * 2) ^
                                                  *(ushort *)
                                                   (PTR_DAT_04bd0f10 +
                                                   ((ulong)((uint)*(ushort *)
                                                                   (PTR_DAT_04bd0f10 +
                                                                   (uVar6 & 0xff) * 2) ^ uVar5 >> 8)
                                                   & 0xff) * 2) >> 8) ^ uVar5 >> 0x18) & 0xff) * 2)
                                                  >> 8)) & 0xff) * 2) ^
                              *(ushort *)
                               (PTR_DAT_04bd0f10 +
                               ((ulong)(uVar7 ^ (ushort)(*(ushort *)
                                                          (PTR_DAT_04bd0f10 +
                                                          ((ulong)((uint)(ushort)(*(ushort *)
                                                                                   (PTR_DAT_04bd0f10
                                                                                   + ((ulong)((uint)
                                                  (ushort)(*(ushort *)
                                                            (PTR_DAT_04bd0f10 +
                                                            ((ulong)((uint)*(ushort *)
                                                                            (PTR_DAT_04bd0f10 +
                                                                            (uVar6 & 0xff) * 2) ^
                                                                    uVar5 >> 8) & 0xff) * 2) ^
                                                          *(ushort *)
                                                           (PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2)
                                                          >> 8) ^ uVar5 >> 0x10) & 0xff) * 2) ^
                                                  *(ushort *)
                                                   (PTR_DAT_04bd0f10 +
                                                   ((ulong)((uint)*(ushort *)
                                                                   (PTR_DAT_04bd0f10 +
                                                                   (uVar6 & 0xff) * 2) ^ uVar5 >> 8)
                                                   & 0xff) * 2) >> 8) ^ uVar5 >> 0x18) & 0xff) * 2)
                                                  ^ *(ushort *)
                                                     (PTR_DAT_04bd0f10 +
                                                     ((ulong)((uint)(ushort)(*(ushort *)
                                                                              (PTR_DAT_04bd0f10 +
                                                                              ((ulong)((uint)*(
                                                  ushort *)(PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2) ^
                                                  uVar5 >> 8) & 0xff) * 2) ^
                                                  *(ushort *)(PTR_DAT_04bd0f10 + (uVar6 & 0xff) * 2)
                                                  >> 8) ^ uVar5 >> 0x10) & 0xff) * 2) >> 8)) & 0xff)
                               * 2) >> 8) & 0xff) * 2) >> 8) & 0xfff) << 3;
    uVar4 = *(ushort *)(param_1 + 0x110e) & 7;
  }
  *(ushort *)(param_1 + 0x110c) = uVar3 | uVar4;
  return;
}

